#include "board.hpp"
#include <iostream>

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

inline void showRow(const Board::container_t::value_type& rowFields, std::size_t rowNumber) {
    std::cout << rowNumber + 1 << ' ';
    for(auto col = 0U; col < Board::Width; ++col) {
        std::cout << '|';
        if(rowFields[col]) {
            std::cout << (*rowFields[col])->getName();
        } else {
            std::cout << ' ';
        }
    }
    std::cout << "| " << rowNumber + 1 << '\n';
}

} // anonymous namespace

//std::array<std::array<std::optional<Piece>, Width>, Height> fields;
Board::Board()
   : fields{}
{




	 for(auto col = 0U; col < Width; ++col) {
	        fields[1][col].emplace(new Pawn(PieceColor::White));
	        fields[6][col].emplace(new Pawn(PieceColor::Black));
	    }


    //fields{
}

void Board::show() const {
    columnNames();
    auto row = Height;
    while(row--) {
        rowSeparator();
        showRow(row);
    }
    rowSeparator();
    columnNames();
}
