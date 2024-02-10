#include<stdio.h>
int main(){
char myChar;
printf("Enter a character :  ");
scanf("%c",&myChar);
char nextchar = myChar+1;
printf("The next character of %c is: %c\n",myChar,myChar);
return 0;

}
