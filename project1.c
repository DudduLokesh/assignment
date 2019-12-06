#include <stdio.h>
 
int main()
{
   int first_var,second_var, add, subtract, multiply;
   first_var=8;
   second_var=5;
   float divide;
 
   add = first_var + second_var;
   subtract = first_var - second_var;
   multiply = first_var * second_var;
   divide = (float) first_var/second_var; //typecasting
   
   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.3f\n", divide);
   
   return 0
}
