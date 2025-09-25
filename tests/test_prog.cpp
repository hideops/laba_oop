#include "../help.h"
#include <gtest/gtest.h>


TEST(checkmatch, monday)
{
    EXPECT_TRUE(check_match("Понедельник", 12));
    EXPECT_FALSE(check_match("Понедельник", 1));
}
TEST(checkmatch, tuesday)
{
    EXPECT_TRUE(check_match("Вторник", 100));;
    EXPECT_FALSE(check_match("Вторник", 1));
}
TEST(checkmatch, wednesday)
{
    EXPECT_TRUE(check_match("Среда", 34));
    EXPECT_FALSE(check_match("Среда", 1));
}
TEST(checkmatch, thursday)
{
    EXPECT_TRUE(check_match("Четверг", 0));
    EXPECT_FALSE(check_match("Четверг", 1));
}
TEST(checkmatch, friday)
{
    EXPECT_TRUE(check_match("Пятница", 12));
    EXPECT_FALSE(check_match("Пятница", 1));
}
TEST(checkmatch, saturday)
{
    EXPECT_TRUE(check_match("Суббота", 56));
    EXPECT_FALSE(check_match("Суббота", 1));
}
TEST(checkmatch, sunday)
{
    EXPECT_TRUE(check_match("Воскресенье", 666));
    EXPECT_TRUE(check_match("Воскресенье", -666));
    EXPECT_FALSE(check_match("Воскресенье", 1));
}