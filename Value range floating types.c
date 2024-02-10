#include<stdio.h>
#include<float.h>
int main()
{
    printf("Value range of float:%e to %e\n",FLT_MIN,FLT_MAX);
    printf("Value range of double:%e to %e\n",DBL_MIN,DBL_MAX);
    printf("Value range of float:%e to %e\n",LDBL_MIN,LDBL_MAX);
    return 0;
}
