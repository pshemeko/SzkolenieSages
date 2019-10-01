#include "queen.hpp"

Queen::Queen(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'Q': 'q'} {
}

char Queen::getName() const {
    return name;
}
