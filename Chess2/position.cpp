#include "position.hpp"
#include "board.hpp"

std::optional<const Position> Position::create(char column, unsigned row) {
    if((column >= 'a') && (column < ('a' + static_cast<char>(Board::Width))) && (row > 0) && (row < Board::Height)) {
        return std::optional<const Position>(Position{static_cast<unsigned>(column - 'a'), row - 1});
    }
    return {};
}

Position::Position(unsigned column_, unsigned row_)
    : column{column_}, row{row_} {}

std::pair<unsigned, unsigned> Position::getIndexes() const {
    return {column, row};
}

std::pair<int, int> Position::compare(const Position& src) const {
    //unsigned srcCol;
    //unsigned srcRow;
    //std::tie(srcCol, srcRow) = src.getIndexes();
    auto [srcCol, srcRow] = src.getIndexes(); // C++17
    return {static_cast<int>(srcCol) - static_cast<int>(column), static_cast<int>(srcRow) - static_cast<int>(row)};
}
