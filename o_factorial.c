#include <stdio.h>
void fact(){
int i,f=1,n=5;    
for(i=1;i<=n;i++){    
f=f*i;}    
printf("Factorial of %d is: %d",n,f);}
int main(){
fact();
return 0;}
