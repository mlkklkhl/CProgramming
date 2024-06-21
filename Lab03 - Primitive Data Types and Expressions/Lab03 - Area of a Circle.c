#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    # circumference of circle formula: C=2πr
    double c = 2 * M_PI * radius;
    # area of circle formula: A=πr^2
    double area = M_PI * radius * radius;

    printf("The circumference of the circle is: %lf \n",c);
    printf("The area of the circle is: %lf \n",area);

    return 0;
}
