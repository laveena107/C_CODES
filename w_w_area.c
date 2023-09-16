#include <stdio.h>
int area(int len, int bred){
int area=len*bred;
printf("Area of Rectangle is: %d", area);}
int main()
{int l,b;
printf("Enter length of a rectangle: ");
scanf("%d",&l);
printf("Enter breadth of a rectangle: ");
scanf("%d",&b);
area(l,b);
return 0;}
