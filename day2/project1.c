#include <stdio.h>

int main() {
    char ISBN[32];        
    char GS1[4];          
    char Identifiant[2];  
    char Editeur[10];     
    char Article[10];
    char Controle[2];     

    printf("Entrez l'ISBN : ");
    scanf("%s", ISBN);  
//  strcpy(ISBN, "978-0-393-97950-3");
    
    int i = 0, j = 0;

    j = 0;
    while (ISBN[i] != '-' && ISBN[i] != '\0') {
        GS1[j++] = ISBN[i++];
    }
    GS1[j] = '\0';
    i++; 

    j = 0;
    while (ISBN[i] != '-' && ISBN[i] != '\0') {
        Identifiant[j++] = ISBN[i++];
    }
    Identifiant[j] = '\0';
    i++;

    j = 0;
    while (ISBN[i] != '-' && ISBN[i] != '\0') {
        Editeur[j++] = ISBN[i++];
    }
    Editeur[j] = '\0';
    i++;

    j = 0;
    while (ISBN[i] != '-' && ISBN[i] != '\0') {
        Article[j++] = ISBN[i++];
    }
    Article[j] = '\0';
    i++;

    j = 0;
    while (ISBN[i] != '-' && ISBN[i] != '\0') {
        Controle[j++] = ISBN[i++];
    }
    Controle[j] = '\0';

    printf("\nPréfixe GS1 : %s\n", GS1);
    printf("Identifiant de groupe : %s\n", Identifiant);
    printf("Code de l'éditeur : %s\n", Editeur);
    printf("Numéro d'article : %s\n", Article);
    printf("Chiffre de contrôle : %s\n", Controle);

    return 0;
}
