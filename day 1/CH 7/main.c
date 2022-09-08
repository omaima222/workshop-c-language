#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    printf("enter a :");
    scanf("%f", &a);
    printf("enter b :");
    scanf("%f", &b);
    printf("%f\n" , a + b);
    printf("%f\n" , a - b);
    printf("%f\n" , a * b);
    printf("%f\n" , a / b);
    printf("%d\n" , (int)a % (int)b);

}
