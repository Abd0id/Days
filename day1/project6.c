#include <stdio.h>
int main(){
    float x, y;
    printf("Entrez une valeur de x: ");
    scanf("%f", &x);

    y = (((3 * (x + 2)) * (x - 5) * (x - 1) * (x + 7) * (x - 6)));

    printf("\nLa resultat est : %.2f\n", y);

    return 0;
}