#include <stdio.h>

int main(){

    char chiffres[2];

    printf("Entrez un nombre à deux chiffres : ");
    scanf("%s",chiffres);

    printf("\nLe nombre inversé est : %c%c\n",chiffres[1],chiffres[0]);


    return 0;
}

