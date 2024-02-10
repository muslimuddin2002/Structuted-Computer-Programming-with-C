#include<stdio.h>
int main()
{
    float days,year,week,month;
    scanf("%f",&days);
    year=days/365;
    printf("Enter the year:%f\n",year);
    week=days/7;
    printf("Enter the week:%f\n",week);
    month=days/30;
    printf("Enter the month:%f\n",month);
    return 0;
}
