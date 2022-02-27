#pragma once
#include "board.hpp"
#include "input.hpp"
#include "fieldState.hpp"

class Player
{
   public:
   Player(const Board& a,const InputI& b,FieldState c);

   private:
    const Board& board;
    const InputI& input;
   const FieldState field;
    
};
