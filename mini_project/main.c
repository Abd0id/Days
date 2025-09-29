#include <stdio.h>
#include <string.h>
#include "avion.h"
#include <stdlib.h>

#define MAX_AVIONS 7

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
                system("clear");
                return 0;
            case 1:
                system("clear");
                if(avionCount < MAX_AVIONS){
                    printf("\n========= AJOUTE UN AVION =========\n");
                    addAvion(avions, avionCount);//we will put that in some list to showAvion them
                    avionCount++;
                }else{
                   printf("\nLA LIST EST PLAIN TU PEUX SUPPRIMER AVEC (3)");
                }                    
                system("clear");
                break;

            case 2:
                system("clear");
                printf("\n========= EDITION D'UN AVION =========\n");
                editAvion(avions, avionCount);
                printf("(1) : Retourn\n");
                printf("\t\n");
                printf("(0) : Quitter\n");
                printf("\t\n");

                printf("Enterz vos choix :");
                scanf("%d",&choix);

                switch(choix){
                    case 0:
                        system("clear");
                        return 0;
                    case 1:
                        system("clear");
                        break;
                    default:
                        system("clear");
                        break;
                }
                break;

            case 3:
                system("clear");
                printf("\n========= SUPPRESSION D'UN AVION =========\n");
                avionCount = deleteAvion(avions, avionCount);
                printf("(1) : Retourn\n");
                printf("\t\n");
                printf("(0) : Quitter\n");
                printf("\t\n");

                printf("Enterz vos choix :");
                scanf("%d",&choix);

                switch(choix){
                    case 0:
                        system("clear");
                        return 0;
                    case 1:
                        system("clear");
                        break;
                    default:
                        system("clear");
                        break;
                }
                break;

            case 4:
                system("clear");
                printf("\n========= LIST DES AVIONS =========\n");
                for(int i = 0; i < avionCount; i++) {
                    showAvion(avions, i, avionCount);
                }

                printf("(1) : Retourn\n");
                printf("\t\n");
                printf("(0) : Quitter\n");
                printf("\t\n");

                printf("Enterz vos choix :");
                scanf("%d",&choix);

                switch(choix){
                    case 0:
                        system("clear");
                        return 0;
                    case 1:
                        system("clear");
                        break;
                    default:
                        system("clear");
                        break;
                }
                break;

            case 5:
                system("clear");
                printf("\n========= RECHERCHE D'UN AVION =========\n");
                searchAvion(avions, avionCount);
                printf("(1) : Retour\n");
                printf("(0) : Quitter\n");
                printf("Entrez votre choix : ");
                scanf("%d", &choix);
                switch(choix){
                    case 0:
                        system("clear");
                        return 0;
                    case 1:
                        system("clear");
                        break;
                    default:
                        system("clear");
                        break;
                }
                break;

            case 6:
                system("clear");
                printf("\n========= TRI DES AVIONS =========\n");
                sortAvion(avions, avionCount);
                printf("(1) : Retour\n");
                printf("(0) : Quitter\n");
                printf("Entrez votre choix : ");
                scanf("%d", &choix);
                switch(choix){
                    case 0:
                        system("clear");
                        return 0;
                    case 1:
                        system("clear");
                        break;
                    default:
                        system("clear");
                        break;
                }
                break;

            default:
                system("clear");
                printf("Choix invalide!\n");
                break;
        }
    }
    return 0;
}