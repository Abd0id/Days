#include <stdio.h>
#include <string.h>
#include "avion.h"


void addAvion (struct avion avions[], int avionCount){
    int tmp_status;
    
    avions[avionCount].ID = avionCount + 1;
    printf("ID d'avion :%04d\n",avions[avionCount].ID);
    printf("\nEntrez le model d'avion :");
    scanf("%29s",avions[avionCount].name);

    printf("\nEntrez le capacite d'avion :");
    scanf("%d",&avions[avionCount].capacity);   

    printf("\nEntrez le statut d'avion (0) Disponible,(1) En maintenance ou (2) En vol :");
    scanf("%d",&tmp_status); 
    
    printf("\nEntrez la date d'Entree d'avion JJ/MM/AA:");
    scanf("%s",&avions[avionCount].date);

    switch(tmp_status){
        case 0:
            strcpy(avions[avionCount].status,"Disponible");
            break;
        case 1:
            strcpy(avions[avionCount].status,"En maintenance");
            break;
        case 2:
            strcpy(avions[avionCount].status,"En vol");
            break;
        default:
            strcpy(avions[avionCount].status,"Disponible");
            break;
    }


/*
    char avion[100][4];
    char model[1][100][30];
    for (int i = 1, i < 100, i++){
        avion[0][i][i] = name;
        avion[1][i] = ID;
        avion[2][i] = capacity;
        avion[3][i] = status;
    }
*/

}