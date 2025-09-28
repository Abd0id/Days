#include <stdio.h>
#include <string.h>
#include "avion.h"

int deleteAvion(struct avion avions[], int avionCount){
    if(avionCount == 0){
        printf("\nAucun avion a supprimer\n");
        printf("\t\n");
        return avionCount;
    }

    int id;
    printf("\nEntrez le ID de l'avion a supprimer : ");
    scanf("%d", &id);

    for(int i = 0; i < avionCount; i++){
        if(avions[i].ID == id){
            for(int j = i; j < avionCount - 1; j++){
                avions[j] = avions[j+1];
            }
            printf("\nAvion supprime\n");
            return avionCount - 1;
        }
    }

    printf("\nAvion avec ID %d non trouve\n", id);
    return avionCount;
}
