#include<stdio.h>

void fun(void)
{
     int s=100;
      printf("fun er s er address- %p\n",&s);
}
int main()
{
    int s=200;
    printf("main er s er address- %p\n",&s);
    fun();

    return 0;
}