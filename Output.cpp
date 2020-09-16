#include<iostream>
#include<string>

#include "Calculation.hpp"
#include "Student_Info.hpp"

void total_score(student* student_list, const unsigned int& student_count)
{   
    std::cout << "TOTAL SCORES" << std::endl;
    for (int i = 0; i < student_count; i++)
    {
        std::cout << student_list[i].student_id << " "<< student_list[i].name << " "<< student_list[i].total_grade << std::endl;
    }
}

void letter_grade(student* student_list, const unsigned int& student_count, const double* cut_point)
{
    for(int i = 0; i < student_count; i++)
    {
        std::cout << student_list[i].student_id << " "<< student_list[i].name << " "
                  << letter_grade_calc(student_list[i].grade_option, student_list[i].total_grade, cut_point) << std::endl;
    }
}
