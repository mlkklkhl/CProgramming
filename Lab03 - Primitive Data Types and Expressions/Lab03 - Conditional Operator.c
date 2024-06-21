#include <stdio.h>

int main(){

    int a = 2, b = 3, i = 4;

    // if b>1 then b = b, else b = i
    a = b > i ? b:i;

    // if b == 3  then b = 2, else b = 1
    b = b == 3 ? 2:1;

    printf("a: %d, b: %d \n", a, b);

    return 0;
}
