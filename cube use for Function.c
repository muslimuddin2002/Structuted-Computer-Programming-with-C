#include<stdio.h>
double cube(double num);
int main(){
double num,c;
printf("Enter any number");
scanf("%lf",&num);
c=cube(num);
printf("cube of %lf is :%.2lf\n",num,c);
return 0;
}
double cube (double num)
{
    return (num*num*num);
}
