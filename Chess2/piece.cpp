#include "piece.hpp"

Piece::Piece(PieceColor color_)
    : color{color_} {}

char Piece::getName() const {
    return '?';
}

PieceColor Piece::getColor() const {
    return color;
}

