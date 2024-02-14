#include<stdio.h>
int main()
{
    int g=20;
    int h=10;

    g=g-h;
    h=g+h;
    g=h-g;
    printf("g= %d\n",g);
    printf("h= %d\n",h);
    return 0;
}
