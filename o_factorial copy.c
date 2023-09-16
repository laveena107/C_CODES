#include <stdio.h>
int fact(){
int i,f=1,n;
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++){    
f=f*i;}
printf("Factorial of %d is: %d",n,f);}
int main(){
fact();
return 0;}
