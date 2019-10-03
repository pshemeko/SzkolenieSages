#pragma once

class Piece;
class Pawn;
class Rook;
class Bishop;
class Knight;
class Queen;
class King;
class Position;

struct Checker {
    static bool check(const Piece  * piece, const Position& from, const Position& to);
    static bool check(const Pawn   * piece, const Position& from, const Position& to);
    static bool check(const Rook   * piece, const Position& from, const Position& to);
    static bool check(const Bishop * piece, const Position& from, const Position& to);
    static bool check(const Knight * piece, const Position& from, const Position& to);
    static bool check(const Queen  * piece, const Position& from, const Position& to);
    static bool check(const King   * piece, const Position& from, const Position& to);
};
