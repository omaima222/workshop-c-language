#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10],som=0;
    for(int i=0;i<10;i++){
    printf("enter num :\n");
    scanf("%d", &num[i]);
                     }
    for(int i=0;i<10;i++){
        if(num[i]>0) som+=num[i];
    }
    printf("\nla sommme : %d" , som);
    return 0;
}
