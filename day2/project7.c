#include <stdio.h>

int main() {
    int n1, n2, og_n1, og_n2, old_n1;
    printf("Entrez une fraction : ");
    scanf("%d/%d", &n1, &n2);
    
    og_n1 = n1;
    og_n2 = n2;
    
    if (n2 < 0) {
        n1 = -n1;
        n2 = -n2;
    }
    
    if (n1 < 0) {
        n1 = -n1;
    }
    
    while (n2 != 0) {
        old_n1 = n2;
        n2 = n1 % n2;
        n1 = old_n1;
    }
    
    int simplified_num = og_n1 / n1;
    int simplified_den = og_n2 / n1;
    
    if (simplified_den < 0) {
        simplified_num = -simplified_num;
        simplified_den = -simplified_den;
    }
    
    printf("Sous sa forme la plus simple : %d/%d\n", simplified_num, simplified_den);
    return 0;
}