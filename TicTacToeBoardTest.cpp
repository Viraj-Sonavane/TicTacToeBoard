/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, test1)
{
	TicTacToeBoard tic1;
	ASSERT_FALSE(X == tic1.toggleTurn());
}	

TEST(TicTacToeBoardTest, test2)
{
	TicTacToeBoard tic2;
	ASSERT_TRUE(Invalid == tic2.getPiece(4,2));
}	

TEST(TicTacToeBoardTest, test3)
{
	TicTacToeBoard tic3;
	ASSERT_TRUE(X == tic3.placePiece(0,0));
}

TEST(TicTacToeBoardTest, test4)
{
	TicTacToeBoard tic4;
	tic4.placePiece(0,0);
	tic4.placePiece(1,1);
	tic4.placePiece(2,2);
	ASSERT_EQ(tic4.getWinner(),Invalid);
}

TEST(TicTacToeBoardTest, test5)
{
	TicTacToeBoard tic5;
	tic5.placePiece(0,0);
	ASSERT_NE(tic5.getWinner(),X);
}
