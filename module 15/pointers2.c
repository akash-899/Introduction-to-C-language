#include<stdio.h>
int main()
{
    double x=5.67;
    double * ptr=&x;

    printf("x er value-%0.2lf\n",x);
    printf("x er value-%0.2lf\n",*ptr);
    return 0;
}