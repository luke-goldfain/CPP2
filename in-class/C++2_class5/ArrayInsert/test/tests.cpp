//tests.cpp

#include "../src/logic.h"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(REMOVETEST, stdarray)
{
    int * testArray = new int[3];
    testArray[0] = 1;
    testArray[1] = 2;
    testArray[2] = 3;
    ASSERT_EQ(2, remove_element(testArray, 3, 3));
}

int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}