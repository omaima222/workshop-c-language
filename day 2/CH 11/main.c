#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur;
    float largeur;
    printf("entrer la longueur :");
    scanf("%f", &longueur);
    printf("entrer la largeur :");
    scanf("%f", &largeur);
    printf("la circonference est : %f", 2*(longueur + largeur) );
    return 0;
}
