#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperature;
    printf("entrer la temperature en Celsius :");
    scanf("%d", &temperature);
    printf("la temperature en Fahrenheit : %f " , (temperature*1.8)+32 );
}
