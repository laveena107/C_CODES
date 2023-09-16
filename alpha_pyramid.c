#include<stdio.h> 
int main() 
{ int m=1,n=5,i,j,k; 
for(i=0;i<n;i++) 
{ for(j=n-1;j>i;j--) 
{ printf(" "); } 
for(k=0;k<m;k++) 
{ printf("%c",k+65);}
m+=2; 
printf("\n"); } 
return 0; }
