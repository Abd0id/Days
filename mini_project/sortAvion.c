#include <stdio.h>
#include <string.h>
#include "avion.h"

void sortAvion(struct avion avions[], int avionCount){
    if(avionCount == 0){
        printf("\nAucun avion a trier\n");
        printf("\t\n");
        return;
    }

    int choix;
    printf("\nVoulez vous trier les avions par :\n");
    printf("(0) : Model alphabetique\n");
    printf("(1) : Capacite\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    for(int i = 0; i < avionCount - 1; i++){
        for(int j = i + 1; j < avionCount; j++){
            if(choix == 0){
                if(strcmp(avions[i].name, avions[j].name) > 0){
                    struct avion tmp = avions[i];
                    avions[i] = avions[j];
                    avions[j] = tmp;
                }
            } else if(choix == 1){
                if(avions[i].capacity > avions[j].capacity){
                    struct avion tmp = avions[i];
                    avions[i] = avions[j];
                    avions[j] = tmp;
                }
            }
        }
    }

    if(choix == 0)
        printf("\n--------- Liste des avions tries par model ---------\n");
    else
        printf("\n--------- Liste des avions tries par capacite ---------\n");

    for(int i = 0; i < avionCount; i++){
        showAvion(avions, i, avionCount);
    }
}
