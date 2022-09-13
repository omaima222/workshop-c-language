#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int rem = 0, rev = 0;
   printf("entrer un nombre:");
   scanf("%d", &num);
   while( num !=0){
    rem = num %10;
    rev = rev * 10;
    rev = rem + rev;
    num = num /10;
   } printf("the reverse number is : %d", rev);


     return 0;
}
