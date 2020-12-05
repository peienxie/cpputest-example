int my_pow(int base, int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }
    return result;
}

double my_sqrt(double number)
{
    double error = 0.00001; //define the precision of your result
    double s = number;

    while ((s - number / s) > error) //loop until precision satisfied 
        s = (s + number / s) / 2;

    return s;
}