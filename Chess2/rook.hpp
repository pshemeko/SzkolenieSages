#pragma once

#include "piece.hpp"

class Rook : public Piece {
public:
    Rook(PieceColor color);
    char getName() const override;
private:
    const char name;
};
