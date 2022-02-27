#pragma once
#include "fieldState.hpp"
#include <vector>

using Fields = std::vector<std::vector<FieldState>>;

struct Coordinates
{
    int x;
    int y;
};

class BoardI
{
public:
    virtual ~BoardI() = default;
    virtual FieldState getState(Coordinates) const = 0;
    virtual void setState(Coordinates, FieldState) = 0;
    virtual int getSize() = 0;
    virtual void fillFields() = 0;
};

class Board : public BoardI
{

};
