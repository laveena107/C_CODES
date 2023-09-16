#include <stdio.h>
int main(){
    int n,i,x,fno,lno;
    printf("Enter the starting number of range: ");
    scanf("%d",&fno);
    printf("Enter the ending number of range: ");
    scanf("%d",&lno);
    printf("The prime numbers between %d and %d are : \n",fno,lno);
  
    for(n=fno;n<=lno;n++)
       {
         x = 0;
         for(i=2;i<=n/2;i++)
            {
             if(n%i==0){
                 x++;
                 break;
             }
        }
         if(x==0 && n!= 1)
             printf("%d ",n);
    }
printf("\n");  
return 0;
}
