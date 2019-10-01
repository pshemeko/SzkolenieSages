#include "pawn.hpp"

Pawn::Pawn(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'P': 'p'} {
}

char Pawn::getName() const {
    return name;
}
