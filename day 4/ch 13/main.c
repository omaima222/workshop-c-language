#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2 ,y2, y1,x,y;
    printf("entrer les coordonnees du premier extremite !\n");
    printf("x1 :");
    scanf("%d", &x1);
    printf("y1 :");
    scanf("%d", &y1);
    printf("entrer les coordonnees du deuxieme extremite !\n");
    printf("x2 :");
    scanf("%d", &x2);
    printf("y2 :");
    scanf("%d", &y2);
    printf("entrer les coordonnees d'un point !\n");
    printf("x :");
    scanf("%d", &x);
    printf("y :");
    scanf("%d", &y);
    int ab = sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2));
    int am = sqrt(pow((x - x1),2)+ pow((y - y1),2));
    int mb =  sqrt(pow((x2 - x),2)+ pow((y2 - y),2));
    if ( am + mb == ab){
        printf("ce point se trouve sur le segment !");
    }else  printf("ce point ne se trouve pas sur le segment !");
    return 0;
}
