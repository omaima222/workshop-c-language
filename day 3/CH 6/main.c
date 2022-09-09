#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("entre un nombre :");
    scanf("%f", &num);
    if(num==0){
        printf("ce nombre est nul");
    }else if(num<0){
        printf("ce nombre est negatif");
    } else{
        printf("ce nombre est positif");
    }
    return 0;
}
