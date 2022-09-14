#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entrer a:");
    scanf("%d", &a);
    printf("entrer b:");
    scanf("%d", &b);
    echange(a,b);
    return 0;
}void echange(int a, int b){
   int c ;
   printf("a etait %d et b etait %d\n", a,b);
   c = a;
   a = b;
   b = c;
   printf("a devient %d et b devient %d", a,b);

}
