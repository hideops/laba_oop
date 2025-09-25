#include "../help.h"
#include <gtest/gtest.h>


TEST(checkmatch, monday)
{
    EXPECT_TRUE(cm("Понедельник", 12));
    EXPECT_FALSE(cm("Понедельник", 1));
    EXPECT_FALSE(cm("Понедельник", 154235));
}
TEST(checkmatch, tuesday)
{
    EXPECT_TRUE(cm("Вторник", 100));
    EXPECT_TRUE(cm("Вторник", 15544));
    EXPECT_FALSE(cm("Вторник", 13));
}
TEST(checkmatch, wednesday)
{
    EXPECT_TRUE(cm("Среда", 34));
    EXPECT_FALSE(cm("Среда", 14324));
}
TEST(checkmatch, thursday)
{
    EXPECT_TRUE(cm("Четверг", 0));
    EXPECT_FALSE(cm("Четверг", 866));
}
TEST(checkmatch, friday)
{
    EXPECT_TRUE(cm("Пятница", 34));
    EXPECT_TRUE(cm("Пятница", 2));
    EXPECT_FALSE(cm("Пятница", 75));
    EXPECT_FALSE(cm("Пятница", 4737));
}
TEST(checkmatch, saturday)
{
    EXPECT_TRUE(cm("Суббота", 56));
    EXPECT_FALSE(cm("Суббота", 5475));
}
TEST(checkmatch, sunday)
{
    EXPECT_TRUE(cm("Воскресенье", 666));
    EXPECT_TRUE(cm("Воскресенье", -666));
    EXPECT_FALSE(cm("Воскресенье", 7437));
}
