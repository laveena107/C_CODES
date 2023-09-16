#include <stdio.h>
#include <conio.h>
#define size 3
int main()
{int sum=0, arr[size][size];
printf("Enter numbers \n\n");
for(int i=0; i<size; i++)
{for(int j=0; j<size; j++)
{scanf("%d",&arr[i][j]);}}
printf("\nDisplaying the Diamond Elements\n\n");
for(int i=0; i<size; i++)
{for(int j=0; j<size; j++)
{if((i==0&&j==0)||(i==0&&j==size-2)||(i==0&&j==size-1)||(i==size-2&&j==size-2)||(i==size-1&&j==0)||(i==size-1&&j==size-2)||(i+j==4))
{printf("%d",arr[i][j]);
sum += arr[i][j];}
printf("  ");}
printf("\n");}
printf("\n\n Sum of elements is %d \n",sum);}
