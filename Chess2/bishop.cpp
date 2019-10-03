#include "bishop.hpp"
#include "checker.hpp"

Bishop::Bishop(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'B': 'b'} {
}

char Bishop::getName() const {
    return name;
}

bool Bishop::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}
