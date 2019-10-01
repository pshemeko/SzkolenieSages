#include "board.hpp"
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
            std::cout << (*rowFields[col])->getName();
        } else {
            std::cout << ' ';
        }
    }
    std::cout << "| " << rowNumber + 1 << '\n';
}

} // anonymous namespace

Board::Board()
    : fields{} {
    //
    // FIXME: A CO Z DESTRUKTOREM MISIU!!!! PRZECIEŻ MASZ NEW!!!
    //
    // Pawns
    for(auto col = 0U; col < Width; ++col) {
        fields[1][col].emplace(new Pawn(PieceColor::White));
        fields[6][col].emplace(new Pawn(PieceColor::Black));
    }
    auto index = 0U;
    std::initializer_list<Piece *> rowWhite = {
        new Rook(PieceColor::White), new Knight(PieceColor::White),
        new Bishop(PieceColor::White), new Queen(PieceColor::White),
        new King(PieceColor::White), new Bishop(PieceColor::White),
        new Knight(PieceColor::White), new Rook(PieceColor::White)};
    for(auto& piece: rowWhite) {
        fields[0][index++].emplace(piece);
    }
    index = 0U;
    std::initializer_list<Piece *> rowBlack = {
        new Rook(PieceColor::Black), new Knight(PieceColor::Black),
        new Bishop(PieceColor::Black), new Queen(PieceColor::Black),
        new King(PieceColor::Black), new Bishop(PieceColor::Black),
        new Knight(PieceColor::Black), new Rook(PieceColor::Black)};
    for(auto& piece: rowBlack) {
        fields[7][index++].emplace(piece);
    }
}

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
