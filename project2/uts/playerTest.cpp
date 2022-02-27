#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "board.hpp"
#include "input.hpp"
#include "inputMock.hpp"
#include "boardMock.hpp"

#include "player.hpp"
using namespace testing;


class PlayerTest : public ::testing::Test
{
    public:
   // NiceMock<BoardMock> boardMock;
    NiceMock<InputMock> inputMock;
    
    protected:
    PlayerTest() {};
    ~PlayerTest() override {};

    void SetUp() override {};
    void TearDown() override {};
};


TEST_F(PlayerTest, a)
{
    
}

TEST_F(PlayerTest, b)
{

    
}
