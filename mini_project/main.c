#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "avion.h"

#define MAX_AVIONS 2 

int main(){
    struct avion avions[MAX_AVIONS];
    int avionCount = 0;
    int choix;

    while (1) {
        printf("\n========= MENU =========\n");
        printf("(1) : Ajout un avion\n");
        printf("\t\n");
        printf("(2) : Modifier un avion\n");
        printf("\t\n");
        printf("(3) : Supprimer un avion\n");
        printf("\t\n");
        printf("(4) : Afficher la list avion\n");
        printf("\t\n");
        printf("(5) : Rechercher un avion\n");
        printf("\t\n");
        printf("(6) : Trier les avion\n");
        printf("\t\n");
        printf("(0) : Quitter\n");
        printf("\t\n");


        printf("Enterz vos choix :");
        scanf("%d",&choix);
        
        
        switch (choix){
            case 0:
                return 0;
            case 1:
                if(avionCount < MAX_AVIONS){
                    addAvion(avions, avionCount);
                    avionCount++;
                }else{
                   printf("\nLA LIST EST PLAIN TU PEUX SUPPRIMER AVEC (3)");
                }                    
                system("clear");
                break;
            case 2:
            //  editAvion();
                printf("\nNOT CODED YET!\n");
                system("clear");
                break;
            case 3:
            //  deleteAvion();
                printf("\nNOT CODED YET!\n");
                system("clear");
                break;
            case 4:
            //  showAvion();
                printf("\nNOT CODED YET!\n");
                system("clear");
                break;
            case 5:
            //  searchAvion();
                printf("\nNOT CODED YET!\n");
                system("clear");
                break;
            case 6:
            //  sortAvion();
                system("clear");
                printf("\nNOT CODED YET!\n");
                break;
            default:
                break;
        }
        system("clear");
    }
    return 0;
}