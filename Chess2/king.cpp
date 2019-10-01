#include "king.hpp"

King::King(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'K': 'k'} {
}

char King::getName() const {
    return name;
}
