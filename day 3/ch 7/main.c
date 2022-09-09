#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cara;
   printf("entre un alphabet :");
   scanf("%c", &cara);
   if( cara <= 'Z' && cara >= 'A' ){
    printf("c est un alphabet majuscule !");
   }else{
    printf("ce n est pas un alphabet majuscule !");
   }

       return 0;
}
