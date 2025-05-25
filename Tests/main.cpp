#include <gtest/gtest.h>

#include "GameTest.cpp"
#include "FieldTest.cpp"
#include "DiscFactoryTest.cpp"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}