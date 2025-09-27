#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "avion.h"


struct avion addAvion (){
    struct avion avions[MAX_AVIONS];
    int tmp_status;
    
    
    printf("Entrez le nom d'avion :");
    scanf("%29s",avions[avionCount].name);

    printf("Entrez le ID d'avion :");
    scanf("%d",&avions[avionCount].ID);

    printf("Entrez le capacite d'avion :");
    scanf("%d",&avions[avionCount].capacity);    

    printf("Entrez le statut d'avion (1 = avalable,0 = inavalable):");
    scanf("%d",&tmp_status);    

    if (tmp_status == 0 || tmp_status == 1){
        avions[MAX_AVIONS].status = (tmp_status != 0); 
    }else{
        printf("\nINVALID INPUT\n");
        printf("Entrez une valid statut d'avion (1 ou 0):");
        scanf("%d",&tmp_status);
    
        if (tmp_status == 0 || tmp_status == 1){
            avions[MAX_AVIONS].status = (tmp_status != 0);
        }else{
            printf("\nINVALID INPUT");
            avions[MAX_AVIONS].status = false;
        }
    }


/*
    char avion[100][4];
    char model[1][100];
    for (int i = 1, i < 100, i++){
        avion[0][i] = name;
        avion[1][i] = ID;
        avion[2][i] = capacity;
        avion[3][i] = status;
    }
*/
    return avions[avionCount];
}