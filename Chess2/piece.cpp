#include "piece.hpp"
#include "position.hpp"
#include "checker.hpp"

Piece::Piece(PieceColor color_)
    : color{color_} {}

char Piece::getName() const {
    return '?';
}

PieceColor Piece::getColor() const {
    return color;
}

bool Piece::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}

