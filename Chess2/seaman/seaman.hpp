#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>


class SeaMan {
public:
    explicit SeaMan(unsigned width)
    :roadWidth{width}, counter{width / 2}, stopThread{false}
    {
        mtx.lock();
        thrdLeft = std::thread(&SeaMan::changePosition, this, 1);
        thrdRight = std::thread(&SeaMan::changePosition, this, -1);
    }

    ~SeaMan() {
        stopThread = true;
        thrdLeft.join();
        thrdRight.join();
    }
    void go() {
        mtx.unlock();
        while(!stopThread) {
            //Sleep(1000);
            //std::this_thread::sleep_for(100ms);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
            //std::cout<<"dupa koniec counter : " << counter;
    }
private:

    void show() const {
        std::lock_guard<std::mutex> lk(mtx);
        std::cout << '|';
        //if (counter == 0) std::cout <<'*';
        for(unsigned i = 0; i < counter; ++i)
        {
            std::cout << '-';
        }
        std::cout << '*';        
        for(unsigned i = counter; i < roadWidth - 1; ++i)
        {
            std::cout << '-';
        }
        std::cout <<'|' << '\n';
    }

    void changePosition(int delta) {

        while(!stopThread)
        {
            {      
                //std::this_thread::sleep_for(std::chrono::milliseconds(100));
                std::this_thread::sleep_for(std::chrono::milliseconds(100 + delta * 9));
                //std::thread(&SeaMan::changePosition, this, delta);   
                
                if ((counter == 0 ) || ( counter == roadWidth -1)) { 
                    stopThread = true;
                    show();
                    std::cout<<"counter : " << counter;
                    break;
                } else {
                counter +=delta;
                show();
                }                

            }
        }
        //show();
    }

    std::thread thrdLeft;
    std::thread thrdRight;
    mutable std::mutex mtx;
    unsigned counter;
    const unsigned roadWidth;
    bool stopThread;
};

