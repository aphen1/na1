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
    Board board;
 NiceMock<InputMock> inputMock;
    protected:
    PlayerTest() {};
    ~PlayerTest() override {};

    void SetUp() override {};
    void TearDown() override {};
};


TEST_F(PlayerTest, a)
{
   Player plejer(board,inputMock,FieldState::EMPTY);
    auto move = std::pair<std::size_t, std::size_t>(1u,2u);
    EXPECT_CALL(PlayerTest::inputMock,getInput()).WillOnce(Return(move));
    //inputMock.getInput();
}


TEST_F(PlayerTest, b)
{

    
}
