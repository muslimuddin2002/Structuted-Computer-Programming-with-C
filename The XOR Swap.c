#include<stdio.h>
int main()
{
int x=12,y=9;

    x=x^y;
    y=x^y;
    x=x^y;
    printf("x= %d\n",x);
    printf("y= %d\n",y);
    return 0;
}
