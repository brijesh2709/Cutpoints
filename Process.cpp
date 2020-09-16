#include <iostream>
#include <sstream>
#include <string>

#include "Grade_Info.hpp"
#include "Student_Info.hpp"
#include "count.hpp"
#include "Output.hpp"

void process()
{
    unsigned int artifact_count = get_count();
    unsigned int* pts_possible = grade_info(artifact_count);
    unsigned int* rel_weight = grade_info(artifact_count);
    grade g = {pts_possible, rel_weight};

    unsigned int student_count = get_count();
    student* student_det = students_list(student_count);

    unsigned int student_raw_score_count = get_count();
    init_score(student_det, student_count, artifact_count);
    update_score(g, student_raw_score_count, student_det, student_count, artifact_count);
   
    total_score(student_det, student_count);

    unsigned int cutpoint_count = get_count();
    for (int i = 0; i < cutpoint_count; i++)
    {
        double* cut_point = cutpoint_info();
        std::cout << "CUTPOINT SET " << i+1 << std::endl;
        letter_grade(student_det, student_count, cut_point);
        delete[] cut_point;
    }
    
    delete[] pts_possible;
    delete[] rel_weight;
    delete[] student_det;
}