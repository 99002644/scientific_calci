
#include <calculator_operations.h>
float add(float a, float b)
    {
        return a+b;
    }
float sub(float a, float b)
    {
        return a-b;
    }
float mul(float a, float b)
    {
        return a*b;
    }
float div(float a,float b)
    {
        return a/b;
    }
float squareroot(float a)
    {
        return sqrt( a);
    }
float sine(float a)
    {
        return sin( a*3.14159 / 180);
    }
float cosine(float a)
    {
        return cos( a*3.14159 / 180);
    }
float tangent(float a)
    {
        return tan( a*3.14159 / 180);
    }

float inv(float a)
    {
        if(a==0){
            exit (0);
        }
        else{
        return 1/(a);
    }
    }
float power(float a,int b)
    {
        return pow(a,b);
    }

float logarithm(float a)
    {
        return log10(a);
    }
float square(float a)
{
    return a*a;
}
