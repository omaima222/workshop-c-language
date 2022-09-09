#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("entrer a :");
    scanf("%f", &a);
    printf("entrer b :");
    scanf("%f", &b);
    printf("entrer c :");
    scanf("%f", &c);
    float delta = pow( b, 2)- 4*a*c ;
    if(delta == 0){
        printf("la solution est : %f", -b/(2*a));
    } else if(delta > 0){
        printf("les solutions sont : %f et %f", (-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a) );
    } else if(delta < 0){
        printf("aucune solution!");
    }

    return 0;
}
