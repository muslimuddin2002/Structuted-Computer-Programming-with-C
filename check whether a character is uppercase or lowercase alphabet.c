#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>='A') && (ch<='Z')){
        printf("%c is an uppercase alphabet.\n",ch);
    }
    if((ch>='a') && (ch<='z')){
    printf("%c is a lowercase alphabet.\n",ch);
    }
        else{
            printf("%c is not alphabet.\n",ch);
        }
    return 0;
}
