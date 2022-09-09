#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, s1, h2, m2, s2;
    printf("entrer  le premier instant !\n");
    printf("heures :");
    scanf("%d", &h1);
    printf("minutes :");
    scanf("%d", &m1);
    printf("seconds :");
    scanf("%d", &s1);
    printf("entrer  le deuxieme instant !\n");
    printf("heures :");
    scanf("%d", &h2);
    printf("minutes :");
    scanf("%d", &m2);
    printf("seconds :");
    scanf("%d", &s2);
    if( h1 > h2 ){
        printf("Le deuxieme instant vient avant le premier!");
    } else if ( h1 < h2 ){
        printf("Le premier instant vient avant le deuxieme !");
    } else if(h1 == h2){
       if( m1 > m2 ){
          printf("Le deuxieme instant vient avant le premier !");
       }else if( m1 < m2 ){
          printf("Le premier instant vient avant le deuxieme !");
       }else if (m1 == m2){
        if(s1 > s2){
             printf("Le deuxieme instant vient avant le premier !");
        }else if (s1<s2){
             printf("Le premier instant vient avant le deuxieme  !");
        }else if(s1 == s2){
             printf("Il s'agit du meme instant");
        }

       }
    }


    return 0;
}
