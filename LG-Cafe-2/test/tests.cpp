#include "../src/ChangeMaker.h"
#include "../src/Cafe.h"
#include <gtest/gtest.h>
#include <vector>

TEST(changeTest, totalChange)
{
    ChangeMaker testChange = ChangeMaker();

    ASSERT_EQ(8.2, testChange.GetTotalChange(10., 18.2));
    ASSERT_EQ(0.21, testChange.GetTotalChange(11.79, 12.));
}

TEST(changeTest, coins)
{
    ChangeMaker testChange = ChangeMaker();

    std::vector<double> testChangeVec {0.25, 0.05};
    
    std::vector<double> testChangeVec2 {10., 5., 1., .1, .01};

    ASSERT_EQ(testChangeVec, testChange.GetChangeInCoins(0.30));
    ASSERT_EQ(testChangeVec2, testChange.GetChangeInCoins(16.11));
}

TEST(cafeTest, calcPrice)
{
  Cafe cafe = Cafe();

  int quantity = 3;

  ASSERT_EQ(6.75, cafe.CalculateTotalPrice(quantity, 0));
  ASSERT_EQ(5.85, cafe.CalculateTotalPrice(quantity, 1));
  ASSERT_EQ(7.5, cafe.CalculateTotalPrice(quantity, 2));
  ASSERT_EQ(9., cafe.CalculateTotalPrice(quantity, 3));
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}