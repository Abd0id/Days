//new_balance = old_balance + (old_balance * monthly_interest) - monthly_payment
#include <stdio.h>

int main(){

    float montant, interest , mensuel;
    float first, second, third;


    printf("Entrez le montant du prêt: ");
    scanf("%f",&montant);
    printf("\nEntrez le taux d'intérêt: ");
    scanf("%f",&interest);
    printf("\nEntrez le paiement mensuel: ");
    scanf("%f",&mensuel);

    interest = interest /100;
    first = montant * (interest / 12) + montant - mensuel;
    second = first * (interest / 12) + first - mensuel;
    third = second * (interest / 12) + second - mensuel;


    printf("\nSolde restant après le premier paiement: %.2f", first);
    printf("\nSolde restant après le deuxième paiement: %.2f", second);
    printf("\nSolde restant après le troisième paiement: %.2f\n", third);


    return 0;
}