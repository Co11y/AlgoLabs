#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
void sort(char * array, int lenght) {
    for (int i  = 0; i < lenght; i++) {
        for (int j = 0; j < lenght - i - 1; j ++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main () {
    char * array = get_string();
    int lenght = strlen(array);
     sort(array, lenght);
     for(int i = 0; i < lenght; i++) {
         printf("%c", array[i]);
     }
}