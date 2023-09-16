#include<stdio.h>
int main()
{
    int stock=100, order;
    int credit,temp;
    printf("Enter the customer order: ");
    scanf("%d",&order);
    temp=order;
    printf("enter the credit score : ");
    scanf("%d",&credit);
    if(order<=stock && credit>=70){
        printf("Sir,\nWe supplied your requirement\nQuantity: %d",temp);}
    else if(order>stock && credit >= 70){
        printf("Sir,\nWe supplied %d products and balance will be shipped later.",stock);}
    else{
        printf("Sir,\nPlease first clear your credit, until we can't supply you any more.");}
    return 0;    
}
