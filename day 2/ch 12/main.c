#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[3];
    printf("enter a number :");
    scanf("%s", &num);
    printf("reverse is : %s", strrev(num));
    return 0;
}
