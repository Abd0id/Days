#include <stdio.h>
#include <ctype.h>

#define grand_msg 100
#define num_long 10

int main(void) {
    char message[grand_msg];
    int i = 0;
    
    printf("Entrez votre message : ");
    
    while ((message[i] = getchar()) != '\n' && i < grand_msg - 1) {
        i++;
    }
    message[i] = '\0'; //deja expliquer par Ayman
    
    printf("En B1FF-speak : ");
    
    for (int j = 0; j < i; j++) {
        char c = toupper(message[j]); //jutilise toupper pre-function from internet
        
        switch (c) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(c);
                break;
        }
    }
    
    for (int k = 0; k < num_long; k++) {
    putchar('!');
    if (k == 2) {
        break;
        }
    }
    printf("\n");
    
    return 0;
}