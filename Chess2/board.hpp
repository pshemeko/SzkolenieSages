#pragma once

#include <array>
#include <cstddef>
#include <memory>

/*
class Piece;
class Position;
class ConsoleVisitor;

class Board {
public:
    constexpr static std::size_t Width = 8;
    constexpr static std::size_t Height = 8;
    using container_t = std::array<std::array<std::unique_ptr<Piece>, Width>, Height>;
    Board();
    ~Board();
    //void show() const;
    [[nodiscard]] bool move(const Position& from, const Position& to);
    void accept(ConsoleVisitor& visitor) const;
private:
    container_t fields;
};
*/