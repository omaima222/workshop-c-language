#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a,b;
   printf("entrer a :");
   scanf("%d", &a);
   printf("entrer b :");
   scanf("%d", &b);
   devidedBy( a, b);
    return 0;
}
void devidedBy( int a, int b, bool p){
     int j=0,i;
     int d = a/b;
     for(i=2;i<d;i++){
       if(d%i == 0) j++;
    }
  printf(" %d/%d = %d", a,b,d);
  if(j==0) p = true;
  else p = false;
  printf("\n est ce que %d est premier ? %d", d,p);
}
