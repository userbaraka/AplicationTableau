#include <stdio.h>
#include "apli1.h"
int main()
{   int i,t,result;
    char c;
    printf("entrer la taille du tableau\n");
    if (scanf("%d",&t)==1)
    {
        int tab[t]; 

            printf("Entrer les valeur du tableau\n");
            for ( i = 0; i < t; i++)
            {
                scanf("%d",&tab[i]); 
            }
            printf("le tableau= ");
            for ( i = 0; i <t; i++)
            {
                printf("%d ",tab[i]); 
            }
        result=somme(tab,t);
        printf("\nla somme vaut %d\n",result);
                
    }else
    {
        printf("Veuillez saisir un nombre copmpris entre 1 et 50\n");
    }
    

   return 0; 
}

