#ifndef AVION_H
#define AVION_H

#include <stdbool.h>

struct avion {
    char name[30];
    int ID;
    int capacity;
    bool status;
};

void addAvion (struct avion avions[], int avionCount)


#endif
