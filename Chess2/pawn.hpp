#pragma once

#include "piece.hpp"

class Position;

class Pawn : public Piece {
public:
    Pawn(PieceColor color);
    char getName() const override;
    bool isMovePossible(const Position& from, const Position& to) const override;
private:
    const char name;
};
