#include "queen.hpp"
#include "checker.hpp"

Queen::Queen(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'Q': 'q'} {
}

char Queen::getName() const {
    return name;
}

bool Queen::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}
