#include <stdio.h>
int main()
{
 int qty,price,total,flavour;
 char name;
 printf("Welcome to Yummies!!! \nMay I know your name please?\n");
 scanf("%s",&name);
 printf("\nMENU CARD \nWhich flavour would you like to have?   \n1.Chocolate \n2.Strawberry \n3.Vanilla \n4.Butterscotch \n5.Belgian Chocolate \n6.Cassata");
 scanf("%d",&flavour);
 switch(flavour)
 {
    case 1:
    printf("\nYou have selected Chocolate flavour.\n Enter the quantity :");
    scanf("%d",&qty);
    price=220;
    total=qty*price;
    printf("\nTotal amount :%d",total);
    break;
    
    case 2:
    printf("\nYou have selected Strawberry flavour.\n Enter the quantity :");
    scanf("%d",&qty);
    price=190;
    total=qty*price;
    printf("\nTotal amount :%d",total);
    break;
    
    case 3:
    printf("\nYou have selected Vanilla flavour.\n Enter the quantity :");
    scanf("%d",&qty);
    price=150;
    total=qty*price;
    printf("\nTotal amount :%d",total);
    break;
    case 4:
    printf("\nYou have selected Butterscotch flavour.\n Enter the quantity :");
    scanf("%d",&qty);
    price=205;
    total=qty*price;
    printf("\nTotal amount :%d",total);
    break;
    
    case 5:
    printf("\nYou have selected Belgian Chocolate flavour.\n Enter the quantity :");
    scanf("%d",&qty);
    price=275;
    total=qty*price;
    printf("\nTotal amount :%d",total);
    break;
    
    case 6:
    printf("\nYou have selected Cassata flavour.\n Enter the quantity :");
    scanf("%d",&qty);
    price=375;
    total=qty*price;
    printf("\nTotal amount :%d",total);
    break;
    
    default:
    printf("\nSorry this flavour is currently Unavailable....");
    break;
}
return 0;
}
