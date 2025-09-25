#include <iostream>
#include <string>
#include "help.h"
int main()
{
    std::cout<<"Введите день недели и число\n";
    std::string day;
    int n;
    std::cin>>day>>n;
    if (check_match(day, n)) std::cout<<"Ты боишься";
    else std::cout<<"Ты не боишься";
    return 0;
}