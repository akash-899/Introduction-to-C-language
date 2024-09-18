#include<stdio.h>
void fun(int* p)
{
   *p=600;
}
int main()
{
    int x=100;
   // printf("x er address - %p\n",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}