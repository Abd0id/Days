#include <stdio.h>
#include <string.h>
#include "avion.h"

void editAvion(struct avion avions[], int avionCount){

    if(avionCount == 0){
        printf("\nAucun avion a modifer\n");
        printf("\t\n");
        return;
    }

    int id, choix;
    printf("Entrez l'ID de l'avion à modifier : ");
    scanf("%d", &id);

    int found = -1;
    for(int i = 0; i < avionCount; i++){
        if(avions[i].ID == id){
            found = i;
            break;
        }
    }

    if(found == -1){
        printf("Avion non trouve\n");
        printf("\t\n");
        return;
    }

    printf("\n--------- Modification de l'avion ID %04d ---------\n", avions[found].ID);
    printf("\t\n");
    printf("(0) : Model\n");
    printf("\t\n");
    printf("(1) : Capacite\n");
    printf("\t\n");
    printf("(2) : Statut\n");
    printf("\t\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch(choix){
        case 0:
            printf("Entrez le nouveau model : ");
            scanf("%29s", avions[found].name);
            break;
        case 1:
            printf("Entrez la nouvelle capacite : ");
            scanf("%d", &avions[found].capacity);
            break;
        case 2:
            int tmp_status;
            printf("Entrez le nouveau statut\n\t\n(0) Disponible\n\t\n(1) En maintenance\n\t\n(2) En vol \n");
            printf("\t\n");
            printf("Entrez votre choix : ");
            scanf("%d", &tmp_status);
            switch(tmp_status){
                case 0: strcpy(avions[found].status, "Disponible"); break;
                case 1: strcpy(avions[found].status, "En maintenance"); break;
                case 2: strcpy(avions[found].status, "En vol"); break;
                default: strcpy(avions[found].status, "Disponible"); break;
            }
            break;
        default:
            printf("Choix invalide!\n");
            break;
    }
}
