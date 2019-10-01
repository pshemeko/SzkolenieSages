#pragma once

#include "piece.hpp"

class Knight : public Piece {
public:
    Knight(PieceColor color);
    char getName() const override;
private:
    const char name;
};
