#include <stdio.h>

int main() {
    printf("Welcome to basic procedure \n\n");

    // 1. Initialize parameters
    int x = 0;
    int y = 0;

    // 2. Get data
    // Ask the user to type a number
    printf("Type the first number: \n");
    // Get and save the X number the user types
    scanf("%d", &x);

    // Ask the user to type a number
    printf("Type the second number: \n");
    // Get and save the X number the user types
    scanf("%d", &y);

    // 3. Compute result
    int z = x + y;

    // 4. Display result
    printf("The result of %d + %d is %d", x, y, z);

    return 0;
}
