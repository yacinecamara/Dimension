#include <stdio.h>
int afficheTableau(int T[],int N)
{ int I;
   /*affichage du tableau*/

   printf("tableau donné :\n");
   for (I=0; I<N; I++)
     { printf("%d " , T[I]);
     }
     return 0;
}
    
int occurance(int T[],int N)
{ int I,J;
/*effacer les occurance de la valeur zéro etcomprimé : */
/*tasser les élements de I vers J et*/
/*ajouter J pour les éléments non nuls.*/

for (I=0, J=0 ; I<N ; I++)
  {
    T[J] = T[I];
    if (T[I]) J++;
  printf ("\n"); }

/*les dimension du tableau actuel !*/
{
  N = J;
/* eddition des résultats */
printf("eddition des résultats:\n");
for    ( I=0; I<N; I++)
{   printf("%d" , T[I]);
          printf("\n");}
         

return 0;
}
}
 




 
 