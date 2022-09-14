#include <stdio.h>
#include <stdlib.h>

int main()
{  int a,b;
    printf("entrer a:");
    scanf("%d", &a);
    printf("entrer b:");
    scanf("%d", &b);
    add( a, b);
    return 0;
}
void add( int a, int b){
    printf("la somme est : %d", a + b);
}
