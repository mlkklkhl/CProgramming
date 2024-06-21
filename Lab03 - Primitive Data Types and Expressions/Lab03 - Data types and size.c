#include <stdio.h>

int main(){

    int a = 20000;
    short b = 3000;
    long c = 200000;

    float d = 0.125;
    double e = 11111.11111;

    printf("int a: %d, short b: %d, long c: %d \n", a, b, c);
    printf("float d: %f, double e: %f \n", d, e);

    // sizeof(variable) return number of memory
    printf("sizeof(a): %d, sizeof(b): %d, sizeof(c): %d \n", sizeof(a), sizeof(b), sizeof(c));
    printf("sizeof(d): %d, sizeof(e): %d \n", sizeof(d), sizeof(e));

    char f = 'A';
    char g = 'a';

    printf("char f: %d, char g: %d \n", f, g);
    printf("char f: %c, char g: %c \n", f, g);

    const float PI = 3.14;

    printf("const PI: %f", PI);

    return 0;
}
