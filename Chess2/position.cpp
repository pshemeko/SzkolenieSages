#include "position.hpp"
#include "board.hpp"

std::optional<Position> Position::create(char column, unsigned row) {
    if((column >='a') && ( column < ('a' + Board::Width)) && (row > 0) &&(row < Board::Height)) {
        //auto pos = Position(column -'a', row -1);
        //std::optional<Position> opt;
        //opt.emplace(std::move(pos));
        //return opt;
        return std::optional<const Position>(Position{static_cast<unsigned>(column -'a'), row -1});
    }
    return {};
}

Position::Position(unsigned column_, unsigned row_)
: column{column_}, row{row_} {}

std::pair<unsigned, unsigned> Position::getIndexes() const {
    return {column, row};
}