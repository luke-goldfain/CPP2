//tests.cpp

#include "../sqrtpow.hpp"
#include "gtest/gtest.h"

TEST(POWTEST, Powers)
{
    EXPECT_EQ(25, pow(5, 2));
    EXPECT_EQ(1728, pow(12, 3));
}

TEST(SQRTTEST, Sqrts)
{
    EXPECT_EQ(5, sqrt(25));
    EXPECT_EQ(2.83, sqrt(8));
}

int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}