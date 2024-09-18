#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    //printf("0th index ar address - %d\n",arr[0]);
   // printf("0th index ar address - %d\n",*arr);
   //printf("1th index er value- %d\n",arr[1]);
   //    printf("1th index er value- %d\n",*(arr+1));
   printf("%d\n",*(arr+3));
   printf("%d\n",*(3+arr));
    return 0;
}