#include <iostream>
#include <sstream>
#include <string>

#include "Student_Info.hpp"
#include "Calculation.hpp"


student get_student()
{
    student s;
    std::cin >> s.student_id >> s.grade_option;
    std::cin.ignore(1);
    std::getline(std::cin, s.name);
    return s;
}

student* students_list(const unsigned int& student_count)
{
    student* student_list = new student[student_count];
    for(int i = 0; i < student_count; i++)
    {
        student_list[i] = get_student();
    }
    return student_list;
}

void zeroFill(unsigned int* a, const unsigned int& size)
{
    for (int i = 0; i < size; i++)
    {
        a[i]=0;
    }    
}

void init_score(student* student_list, const unsigned int& student_list_count, const unsigned int& size)
{
    unsigned int* rs_zero = new unsigned int[size];
    zeroFill(rs_zero,size);

    for (int i = 0; i < student_list_count; i++)
    {
        student_list[i].raw_score = &rs_zero[0];            
    }

    delete[] rs_zero;
}

unsigned int* get_score(const unsigned int& size)
{
    unsigned int* raw_score = new unsigned int[size];
    unsigned int i = 0;

    std::string temp;
    std::getline(std::cin, temp);
    std::stringstream ssin(temp);
    
    while(ssin.good() && i < size)
    {
        ssin >> raw_score[i];
        i++;
    }
    return raw_score;
}

void update_score(const grade& g, const unsigned int& student_raw_score_count, student* student_list, 
                      const unsigned int& student_list_count, const unsigned int& size)
{
    for(int i = 0; i < student_raw_score_count; i++)
    {
        unsigned int* raw_score = get_score(size+1);        
        for(int j = 0; j < student_list_count; j++)
        {
            if(student_list[j].student_id == raw_score[0])
            {
                student_list[j].raw_score = &raw_score[1];
                student_list[j].total_grade = total_grade_calc(g, &raw_score[1], size);
            }
        }

        delete[] raw_score;
    }
}