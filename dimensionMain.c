#include <stdio.h>
#include "dimension.h"
int main()
{int Affiche;
int occul;
int N,I,J; /*tableau donné, dimension, indice courant*/
char c;
/*saisir les données*/
{
printf ("la dimension du tableau max (max.50) :\n");
if(scanf("%d", &N ) == 1)
{ 
int T[N];
for (I=0; I<N;I++)
{
   do
   {
       printf("element%d:",I);
       scanf("%d", &T[I]);
   } while (c=getchar() != '\n' && c !=EOF);
   
}


    Affiche=afficheTableau( T, N);
    occul=occurance(T, N);}
   return 0;
   }
}

