#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
    srand(time(NULL));
    int array[100];
    int array_fixed[100];
    array[0] = rand();
    int min = array[0];
    printf("%d\n", array[0]);
    for (int i = 1; i < 99; i++) {
         array[i] = rand();
        printf("%d\n", array[i]);
        if (min > array[i]) {
            min = array[i];
        }
    }
    for (int i = 1; i < 99; i++) {
        if (array[i] == min) {}
        array[i] = 0;
    }
    int k = 0;
    array_fixed[0] = min;
    for (int i = 1; i < 99; i++) {
        if (array[i] != 0) {
            array_fixed[k] = array[i];
            k++;
        }
    }
    printf("this is min value in array %d\n", min);
    printf("destroyed %d\n", k);
}