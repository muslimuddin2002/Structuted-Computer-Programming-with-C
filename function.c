#include <stdio.h>
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int sub(int x,int y){
    int sub=x-y;
    return sub;
}
int mal(int x,int y){
    int mal=x*y;
    return mal;
}
int div(int x,int y){
    int div=x/y;
    return div;
}
int mod(int x,int y){
    int mod=x%y;
    return mod;
}
int main() {
    int m=sum(100,200);
    int n=sub(100,200);
    int o=mal(10,20);
    int p=div(200,20);
    int q=mod(10,101);
    printf("My sum :%d\n",m);
    printf("My sub :%d\n",n);
    printf("My mal :%d\n",o);
    printf("My div :%d\n",p);
    printf("My mod :%d\n",q);
    return 0;
}
