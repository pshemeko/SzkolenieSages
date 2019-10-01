#pragma once

#include "piece.hpp"

class Pawn : public Piece {
public:
    Pawn(PieceColor color);
    char getName() const override;
private:
    const char name;
};
