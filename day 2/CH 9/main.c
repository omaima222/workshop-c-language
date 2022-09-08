#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1;
    float y1;
    float x2;
    float y2;
    printf("entrer les coordonnees du 1er point , x : ");
    scanf("%f", &x1);
    printf("entrer les coordonnees du 1er point , y : ");
    scanf("%f", &y1);
    printf("entrer les coordonnees du 2eme point , x : ");
    scanf("%f", &x2);
    printf("entrer les coordonnees du 2eme point , y : ");
    scanf("%f", &y2);
    printf("la distance entre ces deux points est : %f" , sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2)));

    return 0;
}
