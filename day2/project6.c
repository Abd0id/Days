#include <stdio.h>

int main() {
    int n1, n2, old_b;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &n1, &n2); 
    
    while (n2 != 0) {
        old_b = n2;
        n2 = n1 % n2;
        n1 = old_b;
    }
    
    printf("Le plus grand commun diviseur est : %d\n", n1);

    return 0;
}