#include<stdio.h>
void world()
{
    printf("world start\n");
    printf("world End\n");
}
void hello()
{
    printf("hello start\n");
    world();
    printf("hello End\n");
}
int main()
{
    printf("main start\n");
    hello();
    printf("main End\n");
    return 0;
}