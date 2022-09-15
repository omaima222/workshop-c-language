#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,p,i,k;
    printf("entrer un nombre :");
    scanf("%d", &num);
    printf("les nombres premiers inferieurs a %d sont :\n", num);
    for(p=2;p<=num;p++){
            for(i=2;i<p;i++){
              k=0;
              if(p%i==0) k=1; break;
            }
        if(k==0) printf("%d\n",p);

    }
    return 0;
}
