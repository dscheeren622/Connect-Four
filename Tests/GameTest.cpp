#pragma once
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Game.cpp"

TEST(Game, testTakeTurn)
{
    // Arrange
    Game game;
    Field field;

    // Act
    game.takeTurn(1, Color::Red, field);
    game.takeTurn(1, Color::Yellow, field);

    // Assert
    int test = field.getDiscs().size();
    int test2 = field.getRedDiscs().size();
    int test3 = field.getYellowDiscs().size();

    EXPECT_EQ(test, 2) << "list of all discs is not properly set";
    EXPECT_EQ(test2, 1) << "list of red discs is not properly set";
    EXPECT_EQ(test3, 1) << "list of yellow discs is not properly set";
}