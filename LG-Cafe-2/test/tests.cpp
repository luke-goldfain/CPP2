#include "../src/ChangeMaker.h"
#include "../src/Cafe.h"
#include <gtest/gtest.h>
#include <vector>

TEST(changeTest, totalChange)
{
    ChangeMaker testChange = ChangeMaker();

    ASSERT_NEAR(8.2f, testChange.GetTotalChange(10.f, 18.2f), 0.001f);
    ASSERT_NEAR(0.21f, testChange.GetTotalChange(11.79f, 12.f), 0.001f);
}

TEST(changeTest, coins)
{
    ChangeMaker testChange = ChangeMaker();

    std::vector<float> testChangeVec {0.25f, 0.05f};
    
    std::vector<float> testChangeVec2 {10.f, 5.f, 1.f, .1f, .01f};

    ASSERT_EQ(testChangeVec, testChange.GetChangeInCoins(0.3f));
    ASSERT_EQ(testChangeVec2, testChange.GetChangeInCoins(16.11f));
}

TEST(cafeTest, calcPrice)
{
  Cafe cafe = Cafe();

  int quantity = 3;

  ASSERT_NEAR(6.75f, cafe.CalculateTotalPrice(quantity, 0), 0.001f);
  ASSERT_NEAR(5.85f, cafe.CalculateTotalPrice(quantity, 1), 0.001f);
  ASSERT_NEAR(7.5f, cafe.CalculateTotalPrice(quantity, 2), 0.001f);
  ASSERT_NEAR(9.f, cafe.CalculateTotalPrice(quantity, 3), 0.001f);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}