#include <stdio.h>
int main()
{
    int num1,num2,op;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter your option: ");
    printf("1-Addition. \n2-Subtraction. \n3-Multiplications. \n4-Division\n");
    scanf("%d", &op);
    switch(op){
        case 1: 
            printf("The Addition of %d and %d is: %d\n", num1,num2,num1+num2);
            break;
        case 2: 
            printf("The Subtraction of %d and %d is: %d\n", num1,num2,num1-num2);
            break;
        case 3: 
            printf("The Multiplication of %d and %d is: %d\n", num1,num2,num1*num2);
            break;
        case 4: 
            printf("The Division of %d and %d is: %d\n", num1,num2,num1/num2);
            break;
        default:
            printf("Input Correct Option");
            break;
    }
     return 0;}
