#include <stdio.h>
void area(){
int l,b;
printf("Enter length of a rectangle: ");
scanf("%d",&l);
printf("Enter breadth of a rectangle: ");
scanf("%d",&b);
int area=l*b;
printf("Area of rectangle is: %d",area);}
int main()
{area();
return 0;}