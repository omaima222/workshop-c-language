#include <stdio.h>
#include <stdlib.h>

int main()
{
  int temperature;
  printf("entrer la temperature en Fahrenheit :");
  scanf("%d", &temperature);
  printf(" la temperature en Celsius: %f" ,(temperature-32)/1.8 );

}
