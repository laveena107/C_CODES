#include<stdio.h>
int main(){
    float sales, comm;
    printf("enter sales");
    scanf("%f",&sales);
    if(sales>1000)
    {
        comm=sales*15/100;
        printf("commission = %0.2f",comm);
        
    }else{
        printf("invalid");
    }
}
