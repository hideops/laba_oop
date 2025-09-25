#include <iostream>
#include <string>
#include "help.h"


bool cm(std::string day, int n)
{
    if (day == "Понедельник" || day == "понедельник")
    {return n == 12 ? true : false;}
    if (day == "Вторник" || day == "вторник")
    {return n > 95 ? true : false;}
    if (day == "Среда" || day == "среда")
    {return n == 34 ? true : false;}
    if (day == "Четверг" || day == "четверг")
    {return n == 0 ? true : false;}
    if (day == "Пятница" || day == "пятница")
    {return n % 2 == 0 ? true : false;}
    if (day == "Суббота" || day == "суббота")
    {return n == 56 ? true : false;}
    if (day == "Воскресенье" || day == "воскресенье")
    {return (n == 666 || n == -666) ? true : false;}
    return false;
}
