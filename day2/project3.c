#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    // calculated times in minutes
    int possible_minutes[] = {
        8 * 60 + 0,    // "08:00"
        9 * 60 + 43,   // "09:43"
        11 * 60 + 19,  // "11:19"
        12 * 60 + 47,  // "12:47"
        14 * 60 + 0,   // "14:00"
        15 * 60 + 45,  // "15:45"
        19 * 60 + 0,   // "19:00"
        21 * 60 + 45   // "21:45"
    };
//  for result
    char possible_strings[8][6] = {
        "08:00", "09:43", "11:19", "12:47",
        "14:00", "15:45", "19:00", "21:45"
    };

    char heure[6];
    
    printf("Entrez une heure (HH:MM) : ");
    scanf("%s", heure);

    int hr, min;      
    sscanf(heure, "%d:%d", &hr, &min);
    
    int user_minutes = hr * 60 + min;

    int min_difference = 24 * 60 + 1; 
    int closest_index = -1;
    
    for (int i = 0; i < 8; i++) {
        int difference = abs(user_minutes - possible_minutes[i]);
        
        if (difference < min_difference) {
            min_difference = difference;
            closest_index = i;
        }
    }

    if (closest_index != -1) {
        printf("L'heure la plus proche de %s est %s.\n", heure, possible_strings[closest_index]);
    } else {
        printf("Une erreur est survenue lors de la recherche de l'heure la plus proche.\n");
    }

    return 0;
}
