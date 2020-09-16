#include <iostream>
#include <sstream>
#include <string>

#include "Grade_Info.hpp"

unsigned int* grade_info(const unsigned int& size)
{
    unsigned int* arr = new unsigned int[size];
    unsigned int i = 0;
    
    std::string temp;
    std::getline(std::cin, temp); 
    std::stringstream ssin(temp);
   
    while(ssin.good() && i < size)
    {
        ssin >> arr[i];
        i++;
    }
    return arr;
}


double* cutpoint_info()
{
    double* arr = new double[6];
    unsigned int i = 0;

    std::string temp;
    std::getline(std::cin, temp);
    std::stringstream ssin(temp);

    while(ssin.good() && i < 4)
    {
        ssin >> arr[i];
        i++;
    }
    return arr;
}