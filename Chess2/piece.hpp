#pragma once

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
private:
    const PieceColor color;
};
