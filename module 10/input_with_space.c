#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    // gets(a); standard na.
    // fgets standard.
    fgets(a,14,stdin);
    a[12]='\0';
    printf("%s",a);
    return 0;
}