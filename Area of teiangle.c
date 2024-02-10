#include<stdio.h>
int main()
{
    float b,h,A;
    printf("Enter the base: ");
    scanf("%f",&b);
    printf("Enter the high: ");
    scanf("%f",&h);
    A = .5 * b * h;
    printf("Area of the triangle is :%f\n",A);
    return 0;
}
