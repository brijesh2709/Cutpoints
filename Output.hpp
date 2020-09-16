#ifndef OUTPUT_HPP
#define OUTPUT_HPP
#include<iostream>
#include "Student_Info.hpp"

void total_score(student* student_list, const unsigned int& student_count);
void letter_grade(student* student_list, const unsigned int& student_count, const double* cut_point);

#endif