#include <stdio.h>
#include <stddef.h>

int my_pow(int base, int exp);
double my_sqrt(double number);

int test_func(void)
{
    return 1;
}

double root_mean_square(int *nums, size_t total)
{
    double res = 0;
    for (size_t i = 0; i < total; ++i)
        res += my_pow(nums[i], 2);
    res /= (double)total;
    return my_sqrt(res);
}