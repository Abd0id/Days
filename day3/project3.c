#include <stdbool.h>
#include <stdio.h>
int main(){
//  41271092
    int digit_seen[10] = {0};
    int digit;
    long n;
    
    int isneg = 1;
    while (isneg){
        printf("Entrez un nombre : ");
        scanf("l%d",&n);

    
        printf("Entrez un nombre : ");
        scanf("%ld",&n);

        if (n <= 0){
            isneg = 0;
        }
        
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

    }
    return 0;
}