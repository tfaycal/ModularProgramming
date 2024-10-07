#include <stdio.h>
#include "struct.h"

void afficher_etudiant(Etudiant e)
{
    printf("Etudiant[%s %s %d]\n",e.nom,e.prenom,e.mat);
}
float calculer_moyenne(Etudiant e, Module * modules,int N)
{
    int i=0;
    float sn=0,sc=0;
    for (;i<N;i++)
    {
        sn+=modules[i].note*modules[i].coef;
        sc+=modules[i].coef;
    }
    return sn/sc;
}