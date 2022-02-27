#include "board.hpp"

FieldState Board::checkField(std::size_t a, std::size_t b) const
{

    return board.at(a).at(b);
};

bool Board::changeField(std::size_t row, std::size_t col, FieldState state)
{
    if (board.at(row).at(col) != FieldState::EMPTY)
    {
        return false;
    }

    board.at(row).at(col) = state;
    return true;
}

int Board::size() const
{
    return board.size();
}

Board::Board(std::size_t sizeOfBoard)
    : board{std::vector<std::vector<FieldState>>
    (sizeOfBoard, std::vector<FieldState>(sizeOfBoard, FieldState::EMPTY))}
{
}

FieldState Board::at(std::size_t row, std::size_t col) const
{
    return board.at(row).at(col);
}
