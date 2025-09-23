#include <stdio.h>
int main(void){
    float x, y;
    printf("Entrez une valeur de x: ");
    scanf("%f", &x);

    y = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    printf("\nLa resultat est: %.2f\n", y);

    return 0;
}