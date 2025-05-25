#pragma once
#include <gtest/gtest.h>

#include "DiscFactory.cpp"

TEST(DiscFactory, makeRedDisc)
{
    // Arrange
    Field field;
    DiscFactory DiscFactory;

    // Act
    DiscFactory.makeRedDisc(1, field);

    // Assert
    int test = field.getDiscs().size();
    int test2 = field.getRedDiscs().size();
    int test3 = field.getYellowDiscs().size();

    EXPECT_EQ(test, 1) << "list of all discs is not properly set";
    EXPECT_EQ(test2, 1) << "list of red discs is not properly set";
    EXPECT_EQ(test3, 0) << "list of yellow discs is not properly set";
}

TEST(DiscFactory, makeYellowDisc)
{
    // Arrange
    Field field;
    DiscFactory DiscFactory;

    // Act
    DiscFactory.makeYellowDisc(1, field);

    // Assert
    int test = field.getDiscs().size();
    int test2 = field.getRedDiscs().size();
    int test3 = field.getYellowDiscs().size();

    EXPECT_EQ(test, 1) << "list of all discs is not properly set";
    EXPECT_EQ(test2, 0) << "list of red discs is not properly set";
    EXPECT_EQ(test3, 1) << "list of yellow discs is not properly set";
}