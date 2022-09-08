#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperature;
    printf("entrer la temperature en Fahrenheit :");
    scanf("%d", &temperature);
    printf("la temperature en Celsius : %f \n " , (temperature-32)/1.8);
    float result = (temperature-32)/1.8;
    if( result == 0){
        printf("froid!");
    } else if( result < 0){
          printf("tres froid!");
    } else if( result > 40){
          printf("tres chaud!");
    }  else if( result == 40){
          printf("chaud!");
    }
}

