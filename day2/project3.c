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
#include <stdio.h>

int main()
{
    int depart[] = {
        8 * 60 + 0,    //8:00
        9 * 60 + 43,   //9:43
        11 * 60 + 19,  //11:19
        12 * 60 + 47,  //12:47
        14 * 60 + 0,   //14:00
        15 * 60 + 45,  //15:45
        19 * 60 + 0,   //19:00
        21 * 60 + 45   //21:45
    };

    int arrival[] = {
        10 * 60 + 16,  //10:16
        11 * 60 + 52,  //11:52
        13 * 60 + 31,  //13:31
        15 * 60 + 0,   //15:00
        16 * 60 + 8,   //16:08
        17 * 60 + 55,  //17:55
        21 * 60 + 20,  //21:20
        23 * 60 + 58   //23:58
    };

    int heure, minutes, user_time;
    int i, min_diff = 99999; 
    int closest
     = 0;

    printf("\nEntrer l'Heure de depart : ");
    scanf("%d", &heure);

    printf("\nEntrer Minutes de depart : ");
    scanf("%d", &minutes);

    user_time = heure * 60 + minutes;

    printf("Heure saisie en minutes : %d\n", user_time);

    for (i = 0; i < 8; i++) {

        int diff = depart[i] - user_time;

        if (diff < 0) diff = -diff;

        if (diff < min_diff) {
            min_diff = diff;
            closest
             = i;
        }
    }

    int dep_heure = depart[closest
    ] / 60;

    int dep_min = depart[closest
    ] % 60;

    int arr_hour = arrival[closest
    ] / 60;

    int arr_min = arrival[closest
    ] % 60;

    printf("Le vol le plus proche part à : %02d:%02d\n", dep_heure, dep_min);
    printf("Heure d'arrivée correspondante : %02d:%02d\n", arr_hour, arr_min);

    return 0;
}
    int min_cmp = 24 * 60 + 1; 
    int closest
     = -1;
    
    for (int i = 0; i < 8; i++) {
        int difference = abs(user_minutes - possible_minutes[i]);
        
        if (difference < min_cmp) {
            min_cmp = difference;
            closest
             = i;
        }
    }

    if (closest
         != -1) {
        printf("L'heure la plus proche de %s est %s.\n", heure, possible_strings[closest]);
    } else {
        printf("Une erreur est survenue lors de la recherche de l'heure la plus proche.\n");
    }

    return 0;
}
