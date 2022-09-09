
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int day, month, year;

    printf("entrer le jour :");
    scanf("%d", &day);
    printf("entrer le mois :");
    scanf("%d", &month);
    printf("entrer l'annee :");
    scanf("%d", &year);
    if( day <= 31 && day >= 1){
        printf("%d/", day);
    }else printf("invalide/");

    if( month == 1){
            printf("janvier");
    }else if ( month == 2){
        printf("fevrier");
    }else if ( month == 3){
       printf("mars");
    }else if ( month == 4){
        printf("avril");
    }else if ( month == 5){
       printf("may");
    }else if ( month == 6){
       printf("juin");
    }else if ( month ==7){
        printf("juillet");
    }else if ( month == 8){
       printf("aout");
    }else if ( month ==9){
       printf("septembre");
    }else if ( month ==10){
       printf("octobre");
    }else if ( month ==11){
       printf("novembre");
    }else if ( month ==12){
       printf("decembre");
    } else printf("invalide");
    printf("/%d", year);

        return 0;
}
