#pragma once

class Position;

enum class PieceColor {
    White,
    Black
};

class Piece {
public:
    Piece(PieceColor color);
    virtual ~Piece() = default;
    virtual char getName() const;
    PieceColor getColor() const;
    virtual bool isMovePossible(const Position& from, const Position& to) const;
private:
    const PieceColor color;
};
