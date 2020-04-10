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
    EXPECT_EQ(10, calcSqrt(100));
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}