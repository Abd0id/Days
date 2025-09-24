#include <stdio.h>

int main(){

    char ISBN[17],GS1[3],Identifiant[1];

    printf("Entrez l'ISBN : ");
    scanf("%s", ISBN);
    int i;
    ISBN = {978-0-393-97950-3};

    for(i = 0; i < 3; i++){

        GS1[i] = ISBN[i];

        if (ISBN[i] == '-'){
        i++;
        }
    }

    GS1[3] = '\0';

    printf("\nPréfixe GS1 : %s\n",GS1);

    for(int j = 0; j < 1; j++){

        Identifiant[j] = ISBN[i];

    }

    GS1[3] = '\0';

    printf("\nIdentifiant de groupe %s\n",Identifiant);

    return 0;
}