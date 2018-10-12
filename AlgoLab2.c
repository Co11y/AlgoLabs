#include <stdio.h>
#include <math.h>
int main () {
    double a = 1.0;
    double result = 0;
    double check;
    int i = 1;
    float a2 = 1.0;
    float result2 = 0;
    float check2;
    int i2 = 1;
    while (1) {
        a = pow(a, i)/ a * 3;
        double temp = a;
        check = temp - a;
        result = result + a;
        a++;
        if (check < 0.0001) {
            break;
        }
    }
        while (1) {
        a2 = pow(a2, i2)/ a2 * 3;
        double temp = a2;
        check2 = temp - a2;
        result2 = result2 + a2;
        a2++;
        if (check2 < 0.0001) {
            break;
        }
    }
    printf("%f", result);
    printf("%f", result2);
}