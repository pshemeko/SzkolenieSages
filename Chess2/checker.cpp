#include "checker.hpp"
#include "piece.hpp"
#include "pawn.hpp"
#include "rook.hpp"
#include "bishop.hpp"
#include "knight.hpp"
#include "queen.hpp"
#include "knight.hpp"
#include "position.hpp"
#include <cassert>
#include <iostream>

namespace {

bool isMoveForward(const Piece * piece, std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    if((piece->getColor() == PieceColor::White) && (deltaRow > 0)) {
        return true;
    }
    return false;
}

bool isPawnStartPosition(const Piece * piece, const Position& from) {
    auto [colIndex, rowIndex] = from.getIndexes();
    auto color = piece->getColor();
    if((color == PieceColor::White) && (rowIndex == 1)) {
        return true;
    } else if((color == PieceColor::Black) && (rowIndex == 6)) {
        return true;
    }
    return false;
}

bool isTwoRow(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return abs(deltaRow) == 2;
}

bool isSameColumn(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return deltaCol == 0;
}

bool isSameRow(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return deltaRow == 0;
}

bool isDiagonal(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return abs(deltaCol) == abs(deltaRow);
}

bool isOneFieldDiagonal(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return (abs(deltaRow) == 1) && (abs(deltaCol) == 1);
}

bool isOneFieldVertical(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return (abs(deltaRow) == 1) && (abs(deltaCol) == 0);
}

bool isOneFieldHorizontal(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return (abs(deltaCol) == 1) && (abs(deltaRow) == 0);
}


bool isKnightMove(std::pair<int, int> delta) {
    auto [deltaCol, deltaRow] = delta;
    return ((abs(deltaRow) == 2) && (abs(deltaCol) == 1))
      || ((abs(deltaRow) == 1) && (abs(deltaCol) == 2));
}

} // anonymous namespace;

bool Checker::check(const Piece * piece, const Position& from, const Position& to) {
    (void) piece;
    (void) from;
    (void) to;
    assert(false);
    return true;
}

bool Checker::check(const Pawn * piece, const Position& from, const Position& to) {
    auto delta = from.compare(to);
    if(isPawnStartPosition(piece, from)
        && isSameColumn(delta)
        && isMoveForward(piece, delta)
        && isTwoRow(delta)) {
        return true;
    } else if(isMoveForward(piece, delta)
        && isOneFieldDiagonal(delta)) {
        return true;
    } else if(isMoveForward(piece, delta)
        && isOneFieldVertical(delta)) {
        return true;
    }
    return false;
}

bool Checker::check(const Rook * piece, const Position& from, const Position& to) {
    (void) piece;
    auto delta = from.compare(to);
    return isSameRow(delta) || isSameColumn(delta);
}

bool Checker::check(const Bishop * piece, const Position& from, const Position& to) {
    (void) piece;
    return isDiagonal(from.compare(to));
}

bool Checker::check(const Knight * piece, const Position& from, const Position& to) {
    (void) piece;
    return isKnightMove(from.compare(to));
}

bool Checker::check(const Queen * piece, const Position& from, const Position& to) {
    (void) piece;
    auto delta = from.compare(to);
    return isSameRow(delta) || isSameColumn(delta) || isDiagonal(delta);
}

bool Checker::check(const King * piece, const Position& from, const Position& to) {
    (void) piece;
    auto delta = from.compare(to);
    return isOneFieldHorizontal(delta) || isOneFieldVertical(delta) || isOneFieldDiagonal(delta);
}
