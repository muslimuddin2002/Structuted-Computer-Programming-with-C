#include<stdio.h>
int main()
{
    float cm,meter,km;
    //Input lenght in centermeter from user
    printf("Enter lenght in centermeter: ");
    scanf("%f",&cm);
    //convert centemeter into meter and kilometer
    meter = cm/100.0;
    km = cm/1000.0;
    printf("Length in meter = %.2fm\n",meter);
    printf("Length in kilometer = %.2fkm\n",km);
        return 0;
}
