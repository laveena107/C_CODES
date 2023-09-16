#include<stdio.h> 

int main() 
{ 
int n=5;//size 
 
int i,j,k; 
for(i=n;i>=1;i--) 
{ 
for(j=n;j>i;j--) 
{ 
printf(" "); 
} 
for(k=1;k<(i*2);k++) 
{ 
printf("%d",k); 
} 

printf("\n"); 
} 
for(i=2;i<=n;i++) 
{ 
for(j=i;j<n;j++) 
{ 
printf(" "); 
} 
for(k=1;k<(i*2);k++) 
{ 
printf("%d",k); 
} 

printf("\n"); 
} 

return 0; 
}
