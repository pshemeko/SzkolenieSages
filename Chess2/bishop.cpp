#include "bishop.hpp"

Bishop::Bishop(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'B': 'b'} {
}

char Bishop::getName() const {
    return name;
}
