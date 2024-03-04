#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any ASCII lowercase letter : ");
    scanf("%c",&lower);
    printf("The ASCII uppercase letter is : %c",lower-32);
    return 0;

}
