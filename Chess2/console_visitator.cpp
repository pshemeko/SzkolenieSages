/*
#include "console_visitator.hpp"
#include <iostream>
#include "board.hpp"

namespace {

inline void rowSeparator() {
    std::cout << "  ";
    for(auto i = 0U; i < Board::Width; ++i) {
        std::cout << "+-";
    }
    std::cout << "+\n";
}

inline void columnNames() {
    std::cout << "  ";
    for(auto i = 0U; i < Board::Height; ++i) {
        std::cout << " " << static_cast<char>(i + 'a');
    }
    std::cout << '\n';
}
inline char showLetter(int a)
{
    char symbol;
    switch( a )
    {
    case 1:
        symbol = 'p';
        break;
    
    case 101:
        symbol = 'P';
        break;
    
    case 2:
        symbol = 'r';
        break;
    case 102:
        symbol = 'R';
        break;
    case 3:
        symbol = 'n';
        break;
    case 103:
        symbol = 'N';
        break;
    case 4:
        symbol = 'b';
        break;
    case 104:
        symbol = 'B';
        break;
    case 5:
        symbol = 'q';
        break;   
    case 105:
        symbol = 'Q';
        break; 
    case 6:
        symbol = 'k';
        break;
    case 106:
        symbol = 'K';
        break;
    default:
        //jakiś kod
        symbol = '0';
        break;
    }
    return symbol;
}
} // anonymous namespace


void ConsoleVisitor::show() {
    columnNames();

    for (std::size_t i = 0; i < Board::Height; ++i)
    {
        std::cout <<'|' << i<< '|';
        for(std::size_t k = 0; k < Board::Width; ++k)
        {
            std::cout<< table[i][k] <<'|';
        }
        std::cout << i;
    }

    columnNames();
}

 void ConsoleVisitor::visit(const int * table_)
 {
     for(std::size_t i =0; i< Board::Width ; ++i)
     {
         for(std::size_t k =0; k< Board::Height;++k)
         {
             table[i][k] = table_[k+i*Board::Height];
         }
     }
 }

 */