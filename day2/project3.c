#include <stdio.h>
#include <stdlib.h>

int main() {
    int departures[] = {
        8 * 60 + 0,    // 08:00
        9 * 60 + 43,   // 09:43
        11 * 60 + 19,  // 11:19
        12 * 60 + 47,  // 12:47
        14 * 60 + 0,   // 14:00
        15 * 60 + 45,  // 15:45
        19 * 60 + 0,   // 19:00
        21 * 60 + 45   // 21:45
    };

    int arrivals[] = {
        10 * 60 + 16,  // 10:16
        11 * 60 + 52,  // 11:52
        13 * 60 + 31,  // 13:31
        15 * 60 + 0,   // 15:00
        16 * 60 + 8,   // 16:08
        17 * 60 + 55,  // 17:55
        21 * 60 + 20,  // 21:20
        23 * 60 + 58   // 23:58
    };

    char *depart_str[] = {
        "8:00 a.m.", "9:43 a.m.", "11:19 a.m.", "12:47 p.m.",
        "2:00 p.m.", "3:45 p.m.", "7:00 p.m.", "9:45 p.m."
    };

    char *arrive_str[] = {
        "10:16 a.m.", "11:52 a.m.", "1:31 p.m.", "3:00 p.m.",
        "4:08 p.m.", "5:55 p.m.", "9:20 p.m.", "11:58 p.m."
    };

    int hour, minute;
    printf("Entrez une heure (24h) [HH:MM] : ");
    scanf("%d:%d", &hour, &minute);

    int user_time = hour * 60 + minute;

    int closest_index = 0;
    int min_diff = abs(user_time - departures[0]);

    for (int i = 1; i < 8; i++) {
        int diff = abs(user_time - departures[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_index = i;
        }
    }

    printf("L'heure de départ la plus proche est %s, arrivant à %s\n",
           depart_str[closest_index], arrive_str[closest_index]);

    return 0;
}
