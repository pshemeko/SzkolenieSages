#pragma once

#include <utility>
#include <optional>

class Position {
public:
    static std::optional<Position> create(char column, unsigned row);
    std::pair<unsigned, unsigned> getIndexes() const;
    Position(const Position&) = default;
private:
    
    Position& operator=(const Position&) = delete;
    Position(unsigned column, unsigned row);
    const unsigned column;
    const unsigned row;

};