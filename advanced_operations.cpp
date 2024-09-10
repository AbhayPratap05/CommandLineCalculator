#include "advanced_operations.h"
#include <cmath>

double power(double base, double exponent){
    return pow(base, exponent);
}
double logarithm(double lognum){
    return log(lognum);
}
double factorial(double factorialnum){
    if (factorialnum < 0)
    {
        return -1;
    }
    else if (factorialnum == 0 || factorialnum == 1)
    {
        return 1;
    }
    else{
        double sample_factorial = 1;
        for (int i = factorialnum; i > 0; i--)
        {
            sample_factorial = i * sample_factorial;
        }    
        return sample_factorial;
    }
    
}
double sine(double angle){
    return sin(angle);
}
double cosine(double angle){
    return cos(angle);
}
double tangent(double angle){
    return tan(angle);
}