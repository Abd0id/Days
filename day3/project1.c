#include <stdbool.h>
#include <stdio.h>
int main(){
//  939577
    bool digit_seen[10] = {false};
    bool digit_again[10] = {false};
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%d",&n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]){
            digit_again[digit] = true;
        }else{
            digit_seen[digit] = true;
        }
        n /= 10;
    }

    bool isfound = false;
    printf("Chiffre(s) répété(s) : ");
    for (int i = 0;i < 10;i++){
        if (digit_again[i]){
            printf(" %d ",i);
            isfound = true;
        }
    }
    printf("\n");

    if (!isfound)
        printf("Aucun chiffre repete.\n");


    return 0;
}