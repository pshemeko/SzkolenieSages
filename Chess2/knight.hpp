#pragma once

#include "piece.hpp"

class Knight : public Piece {
public:
    Knight(PieceColor color);
    char getName() const override;
    bool isMovePossible(const Position& from, const Position& to) const override;
private:
    const char name;
};
