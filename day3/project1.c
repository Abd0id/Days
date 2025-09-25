#include <stdbool.h>
#include <stdio.h>
int main(){
//  939577
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%d",&n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Chiffre(s) répété(s) : %d\n",digit);
    else
        printf("Aucun chiffre repete.\n");
    return 0;
}