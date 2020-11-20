#include <stdio.h>
int afficheTableau(int T[],int N)
{ int I;
 int Tab;
 char c;
   /*affichage du tableau*/
printf("tableau donné :\n");
   for (I=0; I<N; I++)
   { printf("%d\t" , T[I]);
     }
     printf("\n");
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
 }

/*les dimension du tableau actuel !*/
  N = J;
/* eddition des résultats */
printf("eddition des résultats:\n");
for( I=0; I<N; I++)
{   printf("%d\t",T[I]);
  }
  printf("\n");
return N;     
}
int inverseTableau (int T[],int N)
{ 
  int I;
  /*inverse du tableau */
  printf("inverse tableau :\n");
   for(I=N-1; I>=0; I--){
      printf("%d ",T[I]);
   }
     printf("\n");

  return 0;

}
int tabposTabneg (int T[],int N)
{
  int Tab[50], TPOS[50], TNEG[50];
  int U, V;
  int I;
  U=0;
  V=0;
  /* afficher les tableau TPOS et TNEG */
  printf("afficher les tableaux TPOS et TNEG \n");
  for (I=0; I<N; I++)
  {
    if (T[I]>0)
    {
      TPOS[U]=T[I]; U++;
    }
    if (T[I]<0)
    {
      TNEG[V]=T[I];V++;
    }
     
  }
  printf("tableaux TPOS :\n");
  for (I=0; I<U; I++)
{
  printf("%d  ",TPOS[I]);}
  printf("\n");
  printf("tableau TNEG :\n");
  for ( I=0; I<V; I++)
  { 
    printf("%d ", TNEG[I]);
    
    
  }
  printf("\n");
return 0;
}




 
    