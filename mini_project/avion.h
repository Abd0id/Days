#ifndef AVION_H
#define AVION_H

struct avion {
    char name[30];
    int ID;
    int capacity;
    char status[15];
    char date[10];
};

void addAvion(struct avion avions[], int avionCount);
void showAvion(struct avion avions[], int index, int avionCount);
void editAvion(struct avion avions[], int avionCount);
int deleteAvion(struct avion avions[], int avionCount);
void searchAvion(struct avion avions[], int avionCount);
void sortAvion(struct avion avions[], int avionCount);

#endif
