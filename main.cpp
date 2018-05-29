#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
float a1,r,an,Sn,q;
int n;




 printf("\nDigite o primeiro termo: \n");
 scanf("%f",&a1);
 
  printf("\nDigite o numero de termos: \n");
  scanf("%d",&n);
  
   printf("\nDigite a razao: \n");
   scanf("%f", &r);

   an = a1 + (pow(r, r-1));


    Sn= a1 * ((pow(r,n)-1) / (r-1));

     printf("\nO resultado e: %0.1f\n", an);
      printf("o resultado da soma dos termos e %f\n", Sn);

system("pause");
}
