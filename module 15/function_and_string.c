#include<stdio.h>
#include<string.h>
void fun(char arr[])
{
    printf("%d\n",strlen(arr));
}
int main()
{
    char arr[6]="Hello";
    fun(arr);
    return 0;
}