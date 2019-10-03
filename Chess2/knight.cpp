#include "knight.hpp"
#include "checker.hpp"

Knight::Knight(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'N': 'n'} {
}

char Knight::getName() const {
    return name;
}

bool Knight::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}
