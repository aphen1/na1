#include "gtest/gtest.h"
#include "board.hpp"
#include "fieldState.hpp"


TEST(BoardTest, whenBoardCreatedField00Empty)
{
    Board nowa;
    EXPECT_EQ(nowa.checkField(0, 0), FieldState::EMPTY);
}

TEST(BoardTest, whenField00IsEmptyShouldReturnTrueOnChanging)
{
    Board nowa;

    EXPECT_TRUE(nowa.changeField(0, 0, FieldState::X));
}

TEST(BoardTest, whenField00IsEmptyChangeToX)
{
    Board nowa;
    nowa.changeField(0, 0, FieldState::X);
    EXPECT_EQ(nowa.checkField(0, 0), FieldState::X);
}

TEST(BoardTest, whenFieldIsOccupiedShouledReturnFalse)
{
    Board nowa;
    nowa.changeField(0, 0, FieldState::X);
    EXPECT_FALSE(nowa.changeField(0, 0, FieldState::X));
}


TEST(BoardTest, whenField00IsChangedField01RemainEmpty)
{
    Board nowa;
    nowa.changeField(0, 0, FieldState::X);
    EXPECT_EQ(nowa.checkField(0, 1),FieldState::EMPTY);
}

TEST(BoardTest, whenBoardIsInitializedShouldReturnThree)
{
    Board nowa;
    EXPECT_EQ(nowa.size(),3);
}
TEST(BoardTest, whenBoardIsInitializedWith5ShouldReturnSize5)
{
    Board nowa(5);
    EXPECT_EQ(nowa.size(),5);
}

TEST(BoardTest, whenUsingNewAccesMethodReturnFieldEmpty)
{
    Board nowa;
    EXPECT_EQ(nowa.at(0,0),FieldState::EMPTY);
}