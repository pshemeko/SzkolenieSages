#pragma once

#include <utility>
#include <optional>

class Position {
public:
    Position(const Position&) = default;
    // nonmutable
    Position& operator=(const Position&) = delete;
    static std::optional<const Position> create(char column, unsigned row);
    std::pair<unsigned, unsigned> getIndexes() const;
    std::pair<int, int> compare(const Position& src) const;
private:
    Position(unsigned column, unsigned row);
    const unsigned column;
    const unsigned row;
};

