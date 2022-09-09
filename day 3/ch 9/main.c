#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cara;
   printf("entrer un alphabet :");
   scanf("%c", &cara);
   if( cara >= 'a' && cara <= 'z'){
    printf("c'est un alphabet miniscule !");
   }else if ( cara >= 'A' && cara <= 'Z'){
    printf("c'est un alphabet majuscule !");
   }else { printf("ce n'est pas un alphabet!");
   }

    return 0;
}
