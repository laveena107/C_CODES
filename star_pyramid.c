#include <stdio.h>
     int main(){
   int i,j,rows,z;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
   for(i=0;i<rows;i++){
       for(j=0;j<2*(rows-i)-1;j++){
           printf(" ");
       }
      for(z=0;z<2*i+1;z++){
          printf("* ");
      }
      printf("\n");
   }}
