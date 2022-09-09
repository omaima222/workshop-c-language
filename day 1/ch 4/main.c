#include <stdio.h>
#include <stdlib.h>

int main()
{
     float mile;
     printf("entrer la distance en mile :");
     scanf("%f", &mile);
     printf("la distance en metre : %f", mile*1609 );

    return 0;
}
