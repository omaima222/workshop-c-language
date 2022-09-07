#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distance;
    printf("entrer la distance en km :");
    scanf("%f", &distance);
    printf("la distance en mile : %f" , distance/1.609);

}
