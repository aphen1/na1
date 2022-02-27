#pragma once
#include "fieldState.hpp"
#include <vector>



class BoardI
{
public:
    virtual ~BoardI() = default;
    virtual FieldState checkField(std::size_t row, std::size_t col) const = 0;
    virtual bool changeField(std::size_t row, std::size_t col,FieldState state) = 0;
    virtual int size() const=0;
    virtual FieldState at(std::size_t row, std::size_t col) const =0;

};

class Board : public BoardI
{
    public:
    Board(std::size_t sizeOfBoard=3);
    FieldState checkField(std::size_t row, std::size_t col) const override;
    bool changeField(std::size_t row, std::size_t col,FieldState state) override;
    int size() const override;
    FieldState at(std::size_t row, std::size_t col) const override;

private:

    std::vector<std::vector <FieldState>> board;
};
