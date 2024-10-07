#include <stdio.h>
#include "struct.h"
#include "etudiant.h"
void afficher_module(Module m)
{
    printf("Module[%s %d]\n",m.nom,m.coef);
}