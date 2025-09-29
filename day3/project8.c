#include <stdio.h>

int main(void) {
    char phrase[1000];
    char fin;
    int longueur = 0;
    
    printf("Entrez une phrase : ");
    
    while (1) {
        char c = getchar();
        if (c == '.' || c == '?' || c == '!') {
            fin = c;
            break;
        }
        phrase[longueur] = c;
        longueur++;
    }
    
    printf("Inversion de phrase : ");
    
    int fin_du_mot = longueur;
    
    for (int i = longueur - 1; i >= 0; i--) {
        
        if (phrase[i] == ' ') {
            for (int j = i + 1; j < fin_du_mot; j++) {
                printf("%c", phrase[j]);
            }
            printf(" ");
            fin_du_mot = i;
        }
        
        if (i == 0) {
            for (int j = 0; j < fin_du_mot; j++) {

                printf("%c", phrase[j]);
            }
        }
    }
    
    printf("%c\n", fin);
    return 0;
}