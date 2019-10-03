#include "board.hpp"
#include "piece.hpp"
#include "pawn.hpp"
#include "rook.hpp"
#include "knight.hpp"
#include "bishop.hpp"
#include "king.hpp"
#include "queen.hpp"
#include "position.hpp"
#include <iostream>
#include "console_visitator.hpp"
/*
namespace {

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

// void Board::show() const {
//     columnNames();
//     auto row = Height;
//     while(row--) {
//         rowSeparator();
//         showRow(fields[row], row);
//     }
//     rowSeparator();
//     columnNames();
// }

bool Board::move(const Position& from, const Position& to) {
    // "Technical representation" -> fields[row][col]
    auto [fromCol, fromRow] = from.getIndexes();
    auto [toCol, toRow] = to.getIndexes();
    auto& fromFields = fields[fromRow][fromCol];
    auto& toFields = fields[toRow][toCol];
    if(fromFields && !toFields) {
        if(fromFields->isMovePossible(from, to)) {
            fromFields.swap(toFields);
        }
        return true;
    }
    return false;
}

void Board::accept(ConsoleVisitor& visitor) const
{
 int table[Board::Height * Board::Width];
int nr = 0;
 for(auto &zewn: fields)
 {
      for(auto &wewn: zewn)
      {
          table[nr] =(*wewn).getName();
          nr++;
      }
 }


    visitor.visit(table);
}

*/