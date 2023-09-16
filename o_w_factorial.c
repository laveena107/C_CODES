#include <stdio.h>
void fact(int);
void fact(int n){
int i,f=1;
for(i=1;i<=n;i++){
f=f*i;}
printf("Factorial of %d is: %d",n,f);}
int main()
{int num;
printf("Enter a number: ");
scanf("%d",&num);
fact(num);
return 0;}
