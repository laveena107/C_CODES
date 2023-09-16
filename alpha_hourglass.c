#include<stdio.h> 
int main() 
{int z=4*2-1,i,j,k,m=1;
// for upper pyramid
for(i=4;i>=1;i--) 
{ for(j=4-1;j>=i;j--) 
{ printf(" "); } 
for(k=0;k<=z+1;k++) 
{ printf("%c",k+65);}
z-=2; 
printf("\n"); }
//for lower pyramid
for(i=0;i<5;i++) 
{ for(j=5-1;j>i;j--) 
{ printf(" "); } 
for(k=0;k<m;k++) 
{ printf("%c",k+65);}
m+=2; 
printf("\n"); } }
