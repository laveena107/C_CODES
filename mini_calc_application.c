#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main()
{
 int operations;
 
 printf("\n************************************************************************WELCOME TO MINI CALCULATOR!!!!!************************************************************************");
 
do{
 printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 printf("\n\n                                                                Which type of operation do you want to perform.\n\n                                                                              1. Arithmetic \n\n                                                                              2. Trigonometric \n\n                                                                              3. Logarithms & Exponentials \n\n                                                                              4. Powers & Roots\n\n");
 printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 scanf("%d",&operations);
 printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 switch(operations)
 {
    case 1:
           int arith;
           printf("\n\n                                                        Select the operations you want to perform in Arithmetic. \n\n                                                                              5. Addition \n\n                                                                              6. Subtraction \n\n                                                                              7. Multiplication \n\n                                                                              8. Division\n\n");
        printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           scanf("%d",&arith);
           printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           switch(arith){
               
                case 5:
            
                      printf("\n                                                                You have selected Addition!!! Let's do it...........");
                      int aa , ab;
                      printf("\n\n                                                                Please enter the numbers you wanna sum up: ");
                      scanf("%d",&aa);
                      scanf("%d",&ab);
                      int sum=aa+ab;
                      printf("\n\n                                                                           Sum of %d and %d is: %d",aa,ab,sum);
                break;
                
                case 6:
                
                      printf("\n                                                                You have selected Subtraction!!! Let's do it...........");
                      int sa , sb;
                      printf("\n\n                                                                Please enter the numbers you wanna subtract: ");
                      scanf("%d",&sa);
                      scanf("%d",&sb);
                      int diff=sa-sb;
                      printf("\n\n                                                                            Difference of %d and %d is: %d",sa,sb,diff);
                
                break;
                      
               case 7:
               
                      printf("\n                                                                You have selected Multiplication!!! Let's do it...........");
                      int ma , mb;
                      printf("\n\n                                                                Please enter the numbers you wanna multiply: ");
                      scanf("%d",&ma);
                      scanf("%d",&mb);
                      int mul=ma+mb;
                      printf("\n\n                                                                           Product of %d and %d is: %d",ma,mb,mul);
                break;
                
               case 8:
               
                      printf("\n                                                                You have selected Division!!! Let's do it...........");
                      int da , db;
                      printf("\n\n                                                                Please enter the numbers you wanna divide: ");
                      scanf("%d",&da);
                      scanf("%d",&db);
                      int divi=da+db;
                      printf("\n\n                                                                           Result of division of %d and %d is: %d",da,db,divi);
                      break;
                      
               default:
                      printf("\n\n\n                                                                              You have choosen an invalid operator...... Try Again");
                
           }while(arith!=0);
    break;
    
    case 2:
           int trigno;
           
           
           printf("\n\n                                                         Select the operations you want to perform in Trigonometry. \n\n                                                                              9.Sin  \n\n                                                                              10. Cos \n\n                                                                              11. Tan \n\n                                                                              12. Cot \n\n                                                                              13. Sec \n\n                                                                              14. Cosec\n\n");
            printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           scanf("%d",&trigno);
            printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           switch(trigno){
                case 9:
                     printf("\n\n                                                                              You have selected Sin");
                     float sina;
                     printf("\n\n                                                                              Please enter the value for which you wanna check: ");
                     scanf("%f",&sina);
                     float sin_value = sin(sina);
                     printf("\n\n                                                                              The value of sin(%f) is: %f",sina,sin_value);
                     
                break;
                
                case 10:
                      printf("\n\n                                                                              You have selected Cos");
                      float cosa;
                      printf("\n\n                                                                              Please enter the value for which you wanna check: ");
                      scanf("%f",&cosa);
                      float cos_value = cos(cosa);
                      printf("\n\n                                                                              The value of cos(%f) is: %f",cosa,cos_value);
                break;
                
                case 11:
                      printf("\n\n                                                                              You have selected Tan");
                      float tana;
                     printf("\n\n\n                                                                              Please enter the value for which you wanna check: ");
                     scanf("%f",&tana);
                     float tan_value = tan(tana);
                     printf("\n\n                                                                              The value of tan(%f) is: %f",tana,tan_value);
                break;
                
                case 12:
                      printf("\n\n                                                                              You have selected Cot");
                      float cota;
                      printf("\n\n\n                                                                              Please enter the value for which you wanna check: ");
                      scanf("%f",&cota);
                      float cot_value = tanh(cota);
                      printf("\n\n                                                                              The value of cot(%f) is: %f",cota,cot_value);
                break;
                
                case 13:
                      printf("\n\n                                                                              You have selected Sec");
                      float seca;
                      printf("\n\n\n                                                                              Please enter the value for which you wanna check: ");
                      scanf("%f",&seca);
                      float sec_value = sinh(seca);
                      printf("\n\n                                                                              The value of sec(%f) is: %f",seca,sec_value);
                break;
                
                case 14:
                      printf("\n\n                                                                              You have selected Cosec");
                      float coseca;
                      printf("\n\n                                                                              Please enter the value for which you wanna check: ");
                      scanf("%f",&coseca);
                      float cosec_value = cosh(coseca);
                      printf("\n\n                                                                              The value of cosec(%f) is: %f",coseca,cosec_value);
                break;
                
                default:
                      printf("\n\n                                                                              You have choosen an invalid operator...... Try Again");
           }
    break;
    
    case 3:
           int logandexpo;
           printf("\n\n                                                       Select the operations you want to perform in Logarithms & Exponentials. \n\n                                                                              15. Logarithms for Base 2 \n\n                                                                              16. Logarithms for Base 10 \n\n                                                                              17. Exponentials\n\n");
           printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           scanf("%d",&logandexpo);
           printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           switch(logandexpo){
                case 15:
                     printf("\n\n                                                                              You have selected Logarithms for Base 2");
                     float la;
                     printf("\n\n                                                                              Please enter the value for which you wanna check: ");
                     scanf("%f",&la);
                     float log_value = log(la);
                     printf("\n\n                                                                              The value of log(%f) is: %f",la,log_value);
                break;
                
                case 16:
                     printf("\n\n                                                                              You have selected Logarithms for Base 10");
                     float lb;
                     printf("\n\n                                                                              Please enter the value for which you wanna check: ");
                     scanf("%f",&lb);
                     float log10_value = log10(lb);
                     printf("\n\n                                                                              The value of log10(%f) is: %f",lb,log10_value);
                break;
                
                case 17:
                     printf("\n\n                                                                              You have selected Exponentials");
                     float expo;
                     printf("\n\n                                                                              Please enter the value for which you wanna check: ");
                     scanf("%f",&expo);
                     float exp_value = exp(expo);
                     printf("\n\n                                                                              The value of exp(%f) is: %f",expo,exp_value);
                break;
                
                default:
                     printf("\n\n                                                                              You have choosen an invalid operator...... Try Again");}
    
    break;
    
    case 4:
          int pandr;
           printf("\n\n                                                     Select the operations you want to perform in Powers & Roots. \n\n                                                                              18. Powers \n\n                                                                              19. Square Roots \n\n                                                                              20. Cube Roots\n\n");
           printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           scanf("%d",&pandr);
           printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 
 
           switch(pandr){
                case 18:
                     printf("\n\n                                                                              You have selected to calculate powers");
                     double base, power;
                     printf("\n\n\n                                                                              Please enter the number for getting it's value of power: ");
                     scanf("%lf",&base);
                     printf("\n\n\n                                                                              Please enter the number to get the power of the base");
                     scanf("%lf",&power);
                     double ans = pow(base,power);
                     printf("\n\n                                                                              %lf to the power of %lf is: %lf",base,power,ans);
                break;
                
                case 19:
                     printf("\n\n                                                                              You have selected to calculate Square root of a number");
                     double sqno, Sqrt;
                     printf("\n\n                                                                              Please enter the value for which you wanna get the square root: ");
                     scanf("%lf",&sqno);
                     Sqrt=sqrt(sqno);
                     printf("\n\n                                                                              Square Root of %0.2lf is: %0.2lf",sqno, Sqrt);
                break;
                
                case 20:
                     printf("\n\n                                                                              You have selected to calculate Cube root of a number");
                     double cuno, Curt;
                     printf("\n\n                                                                              Please enter the value for which you wanna get the cube root: ");
                     scanf("%lf",&cuno);
                     Curt=cbrt(cuno);
                     printf("\n\n                                                                              Cube Root of %lf is: %lf",cuno, Curt);
                break;
                
                default:
                     printf("\n\n                                                                              You have choosen an invalid operator...... Try Again");}
    
    break;     
    
    default:
        printf("\n\n                                                                              You have choosen an invalid operation...... Try Again");}
}while(operations!=0);
return 0;
}
