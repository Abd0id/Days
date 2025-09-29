#include <stdio.h>

int main() {
    int digit_seen[10] = {0};
    int digit;
    long n;

    while (1) {
        printf("Entrez un nombre (negatif pour quitter) : ");
        scanf("%ld", &n);

        if (n < 0) {   // condition d’arrêt
            break;
        }

        long temp = n;
        while (temp > 0) {
            digit = temp % 10;
            digit_seen[digit] += 1;
            temp /= 10;
        }

        printf("Chiffres : ");
        for (int i = 0; i < 10; i++) {
            printf(" %d ", i);
        }

        printf("\nOccurrences : ");
        for (int i = 0; i < 10; i++) {
            printf(" %d ", digit_seen[i]);
        }
        printf("\n\n");
    }

    return 0;
}
