#include "pawn.hpp"
#include "position.hpp"
#include "checker.hpp"

Pawn::Pawn(PieceColor color_)
    : Piece{color_},
      name{this->getColor() == PieceColor::White ? 'P': 'p'} {
}

char Pawn::getName() const {
    return name;
}

bool Pawn::isMovePossible(const Position& from, const Position& to) const {
    return Checker::check(this, from, to);
}
