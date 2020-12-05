#include "CppUTestExt/MockSupport.h"

extern "C"
{
    int my_pow(int base, int exp);
    double my_sqrt(double number);
}

int my_pow(int base, int exp)
{
    return (int)mock()
        .actualCall(__func__)
        .withParameter("base", base)
        .withParameter("exp", exp)
        .returnIntValue();
}

double my_sqrt(double number)
{
    return (double)mock()
        .actualCall(__func__)
        .withDoubleParameter("number", number)
        .returnDoubleValue();
}