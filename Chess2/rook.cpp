#include "rook.hpp"

Rook::Rook(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'R': 'r'} {
}

char Rook::getName() const {
    return name;
}
