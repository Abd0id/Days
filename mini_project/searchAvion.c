#include <stdio.h>
#include <string.h>
#include "avion.h"

void searchAvion(struct avion avions[], int avionCount){
    if(avionCount == 0){
        printf("\nAucun avion a rechercher\n");
        printf("\t\n");
        return;
    }

    int choix;
    printf("\nVoulez vous rechercher par :\n");
    printf("(0) : ID\n");
    printf("(1) : Modele\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    int found = 0;

    if(choix == 0){
        int id;
        printf("\n--------- Recherche de l'avion par ID ---------\n");
        printf("\t\n");
        printf("Entrez le ID de l'avion : ");
        scanf("%d", &id);
        for(int i = 0; i < avionCount; i++){
            if(avions[i].ID == id){
                showAvion(avions, i, avionCount);
                found = 1;
                break;
            }
        }
        if(!found)
            printf("\nAucun avion trouve avec l'ID %04d\n", id);
    } else if(choix == 1){
        char name[30];
        printf("\n--------- Recherche de l'avion par modele ---------\n");
        printf("\t\n");
        printf("Entrez le modele a rechercher : ");
        scanf("%29s", name);
        for(int i = 0; i < avionCount; i++){
            if(strcmp(avions[i].name, name) == 0){
                showAvion(avions, i, avionCount);
                found = 1;
            }
        }
        if(!found)
            printf("\nAucun avion trouve avec le modele '%s'\n", name);
    } else {
        printf("Choix invalide\n");
    }
}

