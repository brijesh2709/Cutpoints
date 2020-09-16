#ifndef CALCULATION_HPP
#define CALCULATION_HPP
#include<string>
#include "Grade_Info.hpp"

double total_grade_calc(const grade& g, const unsigned int* raw_score, const unsigned int& size);
std::string letter_grade_calc(char& grade_option, const double& total, const double* cut_point);

#endif
