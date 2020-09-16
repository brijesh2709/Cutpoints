#include <iostream>
#include <string>

#include "count.hpp"

unsigned int get_count()
{
   unsigned int num;
    std::cin >> num;

    std::string val;
    std::getline(std::cin, val);

    return num;
}