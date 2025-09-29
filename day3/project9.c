#include <stdio.h>

int main(void) {
    char message[81];
    int decalage;
    
    printf("Entrez le message chiffrer : ");
    
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && i < 80) {
        message[i] = c;
        i++;
    }
    message[i] = '\0';
    
    printf("Entrez le decalag (1-25) : ");
    scanf("%d", &decalage);
    
    printf("Message chiffreer : ");
    
    for (int j = 0; j < i; j++) {
        char lettre = message[j];
        
        if (lettre >= 'A' && lettre <= 'Z') {


            int numero = lettre - 'A';           
            numero = (numero + decalage) % 26;   
            lettre = numero + 'A';               
        }
        else if (lettre >= 'a' && lettre <= 'z') {


            int numero = lettre - 'a';
            numero = (numero + decalage) % 26;
            lettre = numero + 'a';
        }
        
        printf("%c", lettre);
    }
    
    printf("\n");
    return 0;
}