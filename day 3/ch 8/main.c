#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moyenne;
    printf("entrer la moyenne :");
    scanf("%f", &moyenne);
    if( moyenne < 10 ){
        printf("recale ");
    }else if(moyenne >= 10 && moyenne < 12){
       printf("passable");
    }else if(moyenne >= 12 && moyenne < 14){
       printf("assez bien. ");
    }else if(moyenne >= 14 && moyenne < 16){
       printf("bien");
    }else if(moyenne >= 16 ){
       printf("tres bien");
    }
    return 0;
}
