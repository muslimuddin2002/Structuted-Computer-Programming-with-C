#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number > 0){
        printf("The  number is positive\n");
    }
    if(number < 0){
        printf("The number is negative\n");
    }
    if(number == 0){
        printf("The number is zeo\n";)
    }
    return 0;
}
