#include "board.hpp"
#include "piece.hpp"
#include "pawn.hpp"
#include "rook.hpp"
#include "knight.hpp"
#include "bishop.hpp"
#include "king.hpp"
#include "queen.hpp"
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
            std::cout << rowFields[col]->getName();
        } else {
            std::cout << ' ';
        }
    }
    std::cout << "| " << rowNumber + 1 << '\n';
}

void makeFigures(Board::container_t::value_type& rowFields, PieceColor color) {
    rowFields[0] = std::make_unique<Rook>(color);
    rowFields[7] = std::make_unique<Rook>(color);
    rowFields[1] = std::make_unique<Knight>(color);
    rowFields[6] = std::make_unique<Knight>(color);
    rowFields[2] = std::make_unique<Bishop>(color);
    rowFields[5] = std::make_unique<Bishop>(color);
    rowFields[3] = std::make_unique<Queen>(color);
    rowFields[4] = std::make_unique<King>(color);
}

} // anonymous namespace

Board::Board()
    : fields{} {
    // Pawns
    for(auto col = 0U; col < Width; ++col) {
        fields[1][col] = std::make_unique<Pawn>(PieceColor::White);
        fields[6][col] = std::make_unique<Pawn>(PieceColor::Black);
    }
    // Figures
    makeFigures(fields[0], PieceColor::White);
    makeFigures(fields[7], PieceColor::Black);
}

Board::~Board() = default;

void Board::show() const {
    columnNames();
    auto row = Height;
    while(row--) {
        rowSeparator();
        showRow(fields[row], row);
    }
    rowSeparator();
    columnNames();
}
