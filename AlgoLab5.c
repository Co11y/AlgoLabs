#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int sum (int array[10][10], int colum_start, int colum_finish) {
    int result = 0;
    colum_start -= 1;
       for (int r = 0; r < colum_finish; r++) {
        for (int c = colum_start; c < 10; c++) {
            result = result + array[c][r];
        }
    }
    return result;
}
int main () {
    srand(time(NULL));
    int array[10][10];
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            array[c][r] = rand() % 10;
          //  printf ("%d c%d r%d ", array[c][r], c, r);
            printf("%d ", array[c][r]);
        }
        printf("\n");
    }
    int right = sum(array, 1, 10);
    int left = 0;
    printf("return %d\n", right);
    int k = 1;
    while (true) {
        left = sum(array, 1, k);
        int check = right - left;
        printf("check %d, left %d\n", check, left);
        if (left > check) {
            break;
        }
        k++;
    }
    printf("parting colum is %d\n ", k);
}