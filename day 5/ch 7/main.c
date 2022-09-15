#include <stdio.h>
main()
{
  int n,i,Un0=1,Un1=1,Un;
  printf("entrer n :");
  scanf("%d", &n);
  if(n==1 || n==0){
     Un = 1;
     printf("U%d = %d", n, Un);
  } else if(n>1) {
      for(i=2;i<=n;i++){
        Un = Un0 + Un1;
        Un0 = Un1;
        Un1 = Un;
        }
   printf("U%d = %d", n, Un);
  }
  if(n<0) printf("n doit etre positif !");
  return 0;
}
