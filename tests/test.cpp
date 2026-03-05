#include <gtest/gtest.h>

// C言語のファイルを読み込むための設定
extern "C" 
{
    #include "../src/test.h"
}

// テストケース1
TEST(TestGroup, TEST1) {
    EXPECT_EQ(test_add(1, 2, 3), 6);
}

// テストケース2
TEST(TestGroup, TEST2) {
    EXPECT_EQ(test_add(-1, -2, -3), -6);
}