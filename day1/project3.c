#include <stdio.h>

int main(){

    float rayon, volume;

    printf("Entrez le rayon: ");
    scanf("%f",&rayon);

    volume = 4.0f/3.0f * 3.14 * rayon * rayon * rayon;

    printf("\nLe volume de sphere est: %.2f \n",volume);

    return 0;
}