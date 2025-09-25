#include "../help.h"
#include <gtest/gtest.h>


TEST(chm, monday)
{
    EXPECT_TRUE(cm("Понедельник", 12));
    EXPECT_FALSE(cm("Понедельник", 1));
    EXPECT_FALSE(cm("Понедельник", 154235));
}
TEST(chm, tuesday)
{
    EXPECT_TRUE(cm("Вторник", 100));
    EXPECT_TRUE(cm("Вторник", 15544));
    EXPECT_FALSE(cm("Вторник", 13));
}
TEST(chm, wednesday)
{
    EXPECT_TRUE(cm("Среда", 34));
    EXPECT_FALSE(cm("Среда", 14324));
}
TEST(chm, thursday)
{
    EXPECT_TRUE(cm("Четверг", 0));
    EXPECT_FALSE(cm("Четверг", 866));
    EXPECT_FALSE(cm("Четверг", 3261));
}
TEST(chm, friday)
{
    EXPECT_TRUE(cm("Пятница", 34));
    EXPECT_TRUE(cm("Пятница", 86));
    EXPECT_FALSE(cm("Пятница", 75));
    EXPECT_FALSE(cm("Пятница", 4737));
}
TEST(chm, saturday)
{
    EXPECT_TRUE(cm("Суббота", 56));
    EXPECT_FALSE(cm("Суббота", 5475));
    EXPECT_FALSE(cm("Суббота", 3411));
}
TEST(chm, sunday)
{
    EXPECT_TRUE(cm("Воскресенье", 666));
    EXPECT_TRUE(cm("Воскресенье", -666));
    EXPECT_FALSE(cm("Воскресенье", 7437));
    EXPECT_FALSE(cm("Воскресенье", 647181));
}
