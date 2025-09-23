#include <stdio.h>

int main(){

    float montant, tax;

    printf("Entre un montant en dollars: ");
    scanf("%f",&montant);

    tax = ((montant * 5)/100) + montant;

    printf("\nAvec taxe ajoutée: %.2f \n",tax);

    return 0;
}