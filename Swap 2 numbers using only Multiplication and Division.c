#include<stdio.h>
int main(){
int x,y;
printf("Enter two integer numbers\n");
scanf("%d %d",&x,&y);
printf("You entered x =%d and y=%d\n",x,y);

x=x*y;
y=x/y;
x=x/y;

printf("After swapping a a= %d and b = %d\n",x,y);
return 0;
}
