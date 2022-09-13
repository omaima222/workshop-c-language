#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,i;
   int idk = 0;
   printf("entrer le nombre :");
   scanf("%d", &num);
   for(i = 2; i <= num/2 ; i++){
      if(num%i == 0){
        idk=idk+1;
      }
   }
    if( idk == 0){
       printf("ce nombre est premier !");
      }else printf("ce nombre n'est pas premier !");

       return 0;
}
