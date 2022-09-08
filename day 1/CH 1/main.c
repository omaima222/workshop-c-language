#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nom[10];
   char prenom[10];
   int age;
   char sexe[10];
   int telephone;

    printf("enter your name:\n");
    scanf("%s", &nom);
    printf("your name is : %s\n", nom);
    printf("entrer votre prenom:\n");
    scanf("%s", &prenom);
    printf("votre prenom est: %s\n", prenom);
    printf("enter your age:\n");
    scanf("%d", &age);
    printf("your age is : %d\n", age);
    printf("entrer votre sexe:\n");
    scanf("%s", &sexe);
    printf("votre sexe est: %s\n", sexe);
    printf("enter your phone number:\n");
    scanf("%d", &telephone);
    printf("your phone number is : %d\n", telephone);




    return 0;
}
