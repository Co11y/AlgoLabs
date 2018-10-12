#include <stdio.h>
#include <math.h>
int main (void)
{
    // variables
    float a = 1000.0;
    float b = 0.0001;
    double a2 = 1000.0;
    double b2 = 0.0001;
    // math actions
     double c2 = (pow( a2 - b2, 3) - (pow(a2, 3) - 3*a2*a2*b2)) / (pow(b2 , 3) - 3*a2*b2*b2);
     float c =  (pow( a - b, 3) - (pow(a, 3) - 3*a*a*b)) / (pow(b , 3) - 3*a*b*b);

    // output result
    printf ("it's double %f\n", c2);
    printf("it's  float %f\n", c);
}