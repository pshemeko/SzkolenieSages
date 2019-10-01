#include "knight.hpp"

Knight::Knight(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'N': 'n'} {
}

char Knight::getName() const {
    return name;
}
