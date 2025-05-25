#pragma once
#include <gtest/gtest.h>

#include "Field.cpp"

TEST(Field, testFourRowRedPlayer)
{
    // Arrange
    Field field;

    Position position1 = {0,1};
    Position position2 = {0,2};
    Position position3 = {0,2};
    Position position4 = {0,3};

    Disc disc1(position1);
    Disc disc2(position2);
    Disc disc3(position3);
    Disc disc4(position4);

    field.addRedDiscToList(disc1);
    field.addRedDiscToList(disc2);
    field.addRedDiscToList(disc3);
    field.addRedDiscToList(disc4);

    // Act
    field.checkFourRow();

    // Assert
    bool test = field.getFourRowExists();
    EXPECT_EQ(test, true) << "Four row for Red player is not recognized";
}

TEST(Field, testFourRowYellowPlayer)
{
    // Arrange
    Field field;

    Position position1 = {0,1};
    Position position2 = {0,2};
    Position position3 = {0,2};
    Position position4 = {0,3};

    Disc disc1(position1);
    Disc disc2(position2);
    Disc disc3(position3);
    Disc disc4(position4);

    field.addYellowDiscToList(disc1);
    field.addYellowDiscToList(disc2);
    field.addYellowDiscToList(disc3);
    field.addYellowDiscToList(disc4);

    // Act
    field.checkFourRow();

    // Assert
    bool test = field.getFourRowExists();
    EXPECT_EQ(test, true) << "Four row for Yellow player is not recognized";
}

TEST(Field, testFourRowNotPresent)
{
    // Arrange
    Field field;

    Position position1 = {0,1};
    Disc disc1(position1);
    field.addRedDiscToList(disc1);

    // Act
    field.checkFourRow();

    // Assert
    bool test = field.getFourRowExists();
    EXPECT_EQ(test, false) << "Four row illegaly recognized";
}

