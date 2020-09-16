#include<string>
#include "Calculation.hpp"

double total_grade_calc(const grade& g, const unsigned int* raw_score, const unsigned int& size)
{
    double total = 0.0;
    for(int i = 0; i < size; i++)
    {
        total += static_cast<double>(raw_score[i])/g.artifact[i]* g.weight[i];
    }
    return total;
}

std::string letter_grade_calc(char& grade_option, const double& total, const double* cut_point)
{
    switch(grade_option)
    {
        case 'P':
        {
            if (total >= double(cut_point[2])) 
            {
                return "P";
            } 
            else 
            {
                return "NP";
            }
            break;
        }

        case 'G':
        {
            if (total >= double(cut_point[0])) 
            { 
                return "A";
            }
            else
            {
                if (total >= double(cut_point[1])) 
                {
                    return "B";
                }
                else
                {
                    if (total >= double(cut_point[2])) 
                    {
                        return "C";
                    }
                    else
                    {
                        if (total >= double(cut_point[3])) 
                        {
                            return "D";
                        }
                        else 
                        {
                            return "F";
                        }
                    }
                }
            }
            break;
        }
        default:
            return "";
    }
}
