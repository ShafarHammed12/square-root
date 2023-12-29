#include <math.h>
#include <stdio.h>

int main() {
   double number, squareRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);
   printf("%f \n", number);
   
   
   squareRoot = sqrt(number);
   printf("Square root of %f is %f", number, squareRoot);

   return 0;
}