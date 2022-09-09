#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num;
     printf("entre un nombre :");
     scanf("%d", &num);
     if( num % 2 == 0 ){
        printf(" ce nombre est paire ");
     }
     else {
        printf("ce nombre est umpaire");
    }

         return 0;
}
