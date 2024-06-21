#include <stdio.h>
#include <math.h>

int main(){

    char c = 'x'; // 120
    double a = c + 5 + 1.3 + 1.73e4;

    printf("c: %d \n", c);
    printf("a: %f \n", a);

    a = (float)c + (float)5 + 1.3 + 1.73e4;
    printf("casting a: %f \n", a);

    // int a = 0;
    // float b = 5.4;
    // a = (int)b;
    // printf("(int)b: %d \n", a);

    // a = (int)round(b);
    // printf("(int)round(b): %d \n", a);

    return 0;
}
