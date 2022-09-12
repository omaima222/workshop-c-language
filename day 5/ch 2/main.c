#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,space,i,j;
    printf("enter le nombre des lignes pour le triangle :");
    scanf("%d", &L);

     for ( i = 1; i <= L ; i++ ){
       for( space = 1; space <= (L-i); space++){
       printf(" ");
     } for( j = 1; j <= (i*2) -1; j++){
           printf("*");
      } printf("\n");
}
  return 0;
}


