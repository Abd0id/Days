#include <stdbool.h>
#include <stdio.h>
int main(){
//  41271092
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%d",&n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Chiffre : ");
    for (int i = 0;i < 10;i++){
            printf(" %d ",i);
        }
    
    printf("\nOccurrences : ");
        for (int i = 0;i < 10;i++){
            printf(" %d ",digit_seen[i]);
        }
    
    printf("\n");

    return 0;
}