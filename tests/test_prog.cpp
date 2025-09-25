#include "../help.h"
#include <gtest/gtest.h>


TEST(checkmatch, monday)
{
    EXPECT_TRUE(cm("Понедельник", 12));
    EXPECT_FALSE(cm("Понедельник", 1));
}
TEST(checkmatch, tuesday)
{
    EXPECT_TRUE(cm("Вторник", 100));;
    EXPECT_FALSE(cm("Вторник", 1));
}
TEST(checkmatch, wednesday)
{
    EXPECT_TRUE(cm("Среда", 34));
    EXPECT_FALSE(cm("Среда", 1));
}
TEST(checkmatch, thursday)
{
    EXPECT_TRUE(cm("Четверг", 0));
    EXPECT_FALSE(cm("Четверг", 1));
}
TEST(checkmatch, friday)
{
    EXPECT_TRUE(cm("Пятница", 12));
    EXPECT_FALSE(cm("Пятница", 1));
}
TEST(checkmatch, saturday)
{
    EXPECT_TRUE(cm("Суббота", 56));
    EXPECT_FALSE(cm("Суббота", 1));
}
TEST(checkmatch, sunday)
{
    EXPECT_TRUE(cm("Воскресенье", 666));
    EXPECT_TRUE(cm("Воскресенье", -666));
    EXPECT_FALSE(cm("Воскресенье", 1));
}
