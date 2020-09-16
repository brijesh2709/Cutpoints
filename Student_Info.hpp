#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Grade_Info.hpp"
#include "Calculation.hpp"

struct student
{
    unsigned int student_id;
    char grade_option;
    std::string name;
    unsigned int* raw_score;
    double total_grade;
};

student* students_list(const unsigned int& student_count);
void init_score(student* student_list, const unsigned int& student_list_count,const unsigned int& size);
void update_score(const grade& g, const unsigned int& student_raw_score_count, student* student_list, 
                      const unsigned int& student_list_count, const unsigned int& size);

#endif