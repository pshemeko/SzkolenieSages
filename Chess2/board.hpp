#pragma once

#include <array>
#include <cstddef>
#include <optional>
#include <memory>
#include "Piece.h"
#include "Bishop.h"
#include "King.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"

class Board {
public:
    constexpr static std::size_t Width = 8;
    constexpr static std::size_t Height = 8;
    using container_t = std::array<std::array<std::optional< Piece *>, Width>, Height> ;
    Board();
    void show() const;
private:
    //std::array<std::array<std::optional<std::unique_ptr<Piece>>, Width>, Height> fields;
    container_t fields;
};
