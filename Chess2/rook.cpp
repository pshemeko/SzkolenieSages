#include "rook.hpp"
#include "checker.hpp"

Rook::Rook(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'R': 'r'} {
}

char Rook::getName() const {
    return name;
}

bool Rook::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}
