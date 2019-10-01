#pragma once

#include <array>
#include <cstddef>
#include <optional>
#include <memory>

class Piece;

class Board {
public:
    constexpr static std::size_t Width = 8;
    constexpr static std::size_t Height = 8;
    using container_t = std::array<std::array<std::optional<std::unique_ptr<Piece> >, Width>, Height>;
    Board();
    ~Board();
    void show() const;
private:
    container_t fields;
};
