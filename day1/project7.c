#include <stdio.h>

int main(){
    int montant, r1,r2,r3,r4;

    printf("Entrez le montant en dollar: ");
    scanf("%d",&montant);

    r1 = montant / 20;
    r2 = (montant % 20) / 10;
    r3 =  (montant % 10) / 5;
    r4 =  (montant % 5) / 1;
    printf("\nBillets de 20$: %d",r1);
    printf("\nBillets de 10$: %d",r2);
    printf("\nBillets de 5$: %d",r3);
    printf("\nBillets de 1$: %d\n",r4);

    return 0;
}