#include <stdio.h>

int main(){

    int avg = 2 + 3 + 5 / 3;
    float x = 5 * 2 + 6 % 2;

    printf("int avg: %d \n", avg);
    printf("float x: %f \n", x);

    avg = (2 + 3 + 5) / 3;
    x = ((5 * 2) + 6) % 2;

    printf("int avg: %d \n", avg);
    printf("float x: %f \n", x);

    return 0;
}
