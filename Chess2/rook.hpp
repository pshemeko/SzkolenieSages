#pragma once

#include "piece.hpp"

class Rook : public Piece {
public:
    Rook(PieceColor color);
    char getName() const override;
    bool isMovePossible(const Position& from, const Position& to) const override;
private:
    const char name;
};
