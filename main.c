#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "etudiant.h"
#include "module.h"
main()
{

    int t[10];
    printf("%d\n",t[18]);
    
    Etudiant e;
    strcpy(e.nom,"Mohamed Anes");
    strcpy(e.prenom,"Touazi");
    e.mat=1000;
    int nombre_module=2,i=0;
    Module module_ing_2_annee[2];
    strcpy(module_ing_2_annee[0].nom,"SFSD");
    module_ing_2_annee[0].coef=6;
    module_ing_2_annee[0].note=15;
    strcpy(module_ing_2_annee[1].nom,"POO");
    module_ing_2_annee[1].coef=5;
    module_ing_2_annee[1].note=18;


    afficher_etudiant(e);
    for (i=0;i<nombre_module;i++)
        afficher_module(module_ing_2_annee[i]);


    float moyenne=calculer_moyenne(e,module_ing_2_annee,nombre_module);
    printf("La moyenne = %f",moyenne);
}