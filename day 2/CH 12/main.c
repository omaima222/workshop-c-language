#include <stdio.h>
#include <stdlib.h>

 int main(void)
{
   int num = 0;
   int reverse = 0;
   int remainder = 0;

   printf("enter number :");
   scanf("%d", &num);


   while ( num != 0){
    remainder = num % 10;
    reverse = reverse * 10;
    reverse = reverse + remainder;
    num = num / 10;

   }
       printf(" reversed number : %d", reverse );

}


