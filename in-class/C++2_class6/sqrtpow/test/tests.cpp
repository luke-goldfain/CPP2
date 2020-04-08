//tests.cpp

#include "../sqrtpow.hpp"
#include <gtest/gtest.h>

TEST(POWTEST, Powers)
{
    EXPECT_EQ(25, calcPow(5, 2));
    EXPECT_EQ(1728, calcPow(12, 3));
}

TEST(SQRTTEST, Sqrts)
{
    EXPECT_EQ(5, calcSqrt(25));
    EXPECT_EQ(2.83, calcSqrt(8));
}

int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}