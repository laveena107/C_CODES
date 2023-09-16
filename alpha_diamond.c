#include<stdio.h> 
int main() 
{ int n=5,z=n*2-1,i,j,k,m=1;
//for upper pyramid
for(i=0;i<n-1;i++) 
{ for(j=n-1;j>i;j--) 
{ printf(" "); } 
for(k=0;k<m;k++) 
{ printf("%c",k+65);}
m+=2; 
printf("\n"); } 
// for lower pyramid
for(i=n;i>=1;i--) 
{ for(j=n-1;j>=i;j--) 
{ printf(" "); } 
for(k=0;k<z;k++) 
{ printf("%c",k+65);}
z-=2; 
printf("\n"); } 
return 0; }

