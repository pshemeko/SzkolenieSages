#pragma once

#include "piece.hpp"

class King : public Piece {
public:
    King(PieceColor color);
    char getName() const override;
    bool isMovePossible(const Position& from, const Position& to) const override;
private:
    const char name;
};
