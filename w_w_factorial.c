#include<stdio.h>
int fact(int n){
int i,f=1;    
for(i=1;i<=n;i++){    
f=f*i;}
return f;}
int main(){
int factorial,no;
printf("Enter the number: ");
scanf("%d",&no);
factorial=fact(no);
printf("Factorial of %d is: %d",no,factorial);
return 0;}
