#include <gtest/gtest.h>
#include <string>
#include "func.h"

class FuncTest : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

// Тест для нуля
TEST_F(FuncTest, ZeroInput) {
    unsigned int n = 0;
    std::string expected = "00000000000000000000000000000000";
    EXPECT_EQ(func(n), expected);
}

// Тест для единицы
TEST_F(FuncTest, OneInput) {
    unsigned int n = 1;
    std::string expected = "00000000000000000000000000000001";
    EXPECT_EQ(func(n), expected);
}

// Тест для максимального unsigned int
TEST_F(FuncTest, MaxUnsignedInt) {
    unsigned int n = 4294967295;
    std::string expected = "11111111111111111111111111111111";
    EXPECT_EQ(func(n), expected);
}

// Тест для числа 255 (все биты младшего байта установлены)
TEST_F(FuncTest, ByteValue) {
    unsigned int n = 255;
    std::string expected = "00000000000000000000000011111111";
    EXPECT_EQ(func(n), expected);
}

// Тест для числа 256 (9-й бит установлен)
TEST_F(FuncTest, PowerOfTwo) {
    unsigned int n = 256;
    std::string expected = "00000000000000000000000100000000";
    EXPECT_EQ(func(n), expected);
}

// Тест для произвольного числа
TEST_F(FuncTest, ArbitraryNumber) {
    unsigned int n = 123456789;
    std::string expected = "00000111010110111100110100010101";
    EXPECT_EQ(func(n), expected);
}

// Тест для числа 2 (второй бит установлен)
TEST_F(FuncTest, TwoInput) {
    unsigned int n = 2;
    std::string expected = "00000000000000000000000000000010";
    EXPECT_EQ(func(n), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}