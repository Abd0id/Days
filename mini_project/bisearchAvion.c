#include <stdio.h>
#include <string.h>
#include "avion.h"

void bisearchAvion(struct avion avions[], int avionCount) {
    if (avionCount == 0) {
        printf("\nAucun avion a rechercher\n\n");
        return;
    }

    // On trie par ID avant la recherche
    sortAvionByID(avions, avionCount);

    int id;
    printf("\n--------- Recherche de l'avion par ID ---------\n\n");
    printf("Entrez le ID de l'avion : ");
    scanf("%d", &id);

    int left = 0;
    int right = avionCount - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (avions[mid].ID == id) {
            showAvion(avions, mid, avionCount);
            found = 1;
            break;
        } else if (id < avions[mid].ID) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (!found) {
        printf("\nAucun avion trouve avec l'ID %04d\n\n", id);
    }
}
