#include <stdio.h>
#include <string.h>
#include "avion.h"


void showAvion (struct avion avions[], int index ,int avionCount){

    if(avionCount == 0){
        printf("\nAucun avion a liste\n");
        printf("\t\n");
        return;
    }

    printf("\n----------- Avion %d -----------\n", index + 1);
    printf("\t\n");
    
    printf("ID d'avion :%04d\n",avions[index].ID);
    printf("\t\n");
    
    printf("\nLe model d'avion :%s",avions[index].name);
    printf("\t\n");
    
    printf("\nLa capacite d'avion :%03d",avions[index].capacity);   
    printf("\t\n");
    
    printf("\nLe statut d'avion :%s",avions[index].status); 
    printf("\t\n");
    
    printf("\nLa date d'Entree d'avion :%s",avions[index].date);
    printf("\n--------------------------------\n");

}