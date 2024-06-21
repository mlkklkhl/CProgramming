#include <stdio.h>

int main(){
    int a, b, i = 4;
    a = i++; // This means a = i; and i = i+1;
    b = ++i; // This means i = i+1; and b = i;

    printf("a: %d, b: %d", a, b);

    return 0;
}
