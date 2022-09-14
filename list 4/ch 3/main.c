#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int num;
    printf("entrer un nombre:");
    scanf("%d", &num);
    isPremier(num);
    return 0;
}
void isPremier(int num, bool hm ){
    int i;
    int P = 0;

    for( i=2;i<num;i++){
        if(num%i == 0) {P++; break;}
    }

    if( P == 0 ) {
            hm=true;
            printf("%d",hm);
    }else{
        hm=false;
        printf("%d", hm);
    }

   return 0;

    }


