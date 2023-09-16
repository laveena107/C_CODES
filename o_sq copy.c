#include <stdio.h>
int Square(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
int sq = num*num;
printf("Square of %d is: %d",num,sq);}
int main()
{Square();
return 0;}
