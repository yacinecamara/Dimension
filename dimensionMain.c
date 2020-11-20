#include <stdio.h>
#include "dimension.h"
int main()
{
    int Affiche;
    int occul;
    int N, I, J; /*tableau donné, dimension, indice courant*/
    int U,V;
    char c;
    int Tab;
  printf("la dimension du tableau max (max.50) :\n");
 do  { 
    /*saisir les données*/
    
        if(((scanf("%d", &N) == 1 ) || (c = getchar() != '\n' && c != EOF)) && (N<=50 && N>1))
        {
            int T[N];
            for (I = 0; I < N; I++)
            {
                do
                {
                    printf("element%d:", I);
                    scanf("%d", &T[I]);
                } while (c = getchar() != '\n' && c != EOF);
            }

            Affiche = afficheTableau(T, N);
            occul = occurance(T, N);
            inverseTableau(T,occul);
            tabposTabneg (T,occul);
}else
{
    printf("veiller saisir un nombre compris entre 1 et 50 \n");
}
}while (N>1 && N>=50); 


return 0;
}
     

