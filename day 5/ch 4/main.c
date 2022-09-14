#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num=1, som=0, max=0;

    printf("entrer un numero , pour terminer entrer 0 !\n");
      while( num!=0){
        do {
           scanf("%d", &num);
           if(num>100) printf("s'il vous plait entrer un numero plus petit que 100!");
           }
      while(num>100);
         som+=num;
         if (num>max) max = num;

}
      printf("la somme : %d\n", som);
      printf("le max : %d", max);

     return 0;
}
