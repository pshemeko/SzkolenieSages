#include "king.hpp"
#include "checker.hpp"

King::King(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'K': 'k'} {
}

char King::getName() const {
    return name;
}

bool King::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}
