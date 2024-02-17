#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%7==0 && n%12==0){
        printf("%d is divisible.\n",n);
    }
    else{printf("%d is not divisible.\n",n);
    }
    return 0;
}
