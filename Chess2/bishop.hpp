#pragma once

#include "piece.hpp"

class Bishop : public Piece {
public:
    Bishop(PieceColor color);
    char getName() const override;
private:
    const char name;
};
