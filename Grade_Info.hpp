#ifndef GRADE_HPP
#define GRADE_HPP

struct grade
{
    unsigned int* artifact;
    unsigned int* weight;
};

unsigned int* grade_info(const unsigned int& size);
double* cutpoint_info();

#endif