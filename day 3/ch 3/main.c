#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b;
     printf("entrer a :");
     scanf("%d", &a);
     printf("entrer b :");
     scanf("%d", &b);
     printf("la somme :%d\n", a+b);
     int somme = a+b;
     if(a==b){
        printf("le triple du somme : %d", somme*3);
     }

         return 0;
}
