#include "../src/ChangeMaker.h"
#include <gtest/gtest.h>
#include <vector>

TEST(changeTest, change)
{
    ChangeMaker testChange = new ChangeMaker();

    std::vector<double> testChangeVec {0.25, 0.05};

    ASSERT_EQ(8.2, testChange.GetTotalChange(10., 18.2));
    ASSERT_EQ(testChangeVec, testChange.GetChangeInCoins(0.30));
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}