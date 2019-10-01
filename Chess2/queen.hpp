#pragma once

#include "piece.hpp"

class Queen : public Piece {
public:
    Queen(PieceColor color);
    char getName() const override;
private:
    const char name;
};
