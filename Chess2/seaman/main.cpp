#include "seaman.cpp"
/*

#include "board.hpp"
#include "position.hpp"
#include "console_visitator.hpp"

int main() {
    Board board;
    (void) board.move(*Position::create('e', 2), *Position::create('e', 4));
    (void) board.move(*Position::create('b', 1), *Position::create('c', 3));
    //board.show();
ConsoleVisitor cv;

board.accept(cv);

cv.show();
}

*/

int main() {
    SeaMan seaman{10};
    seaman.go();
}