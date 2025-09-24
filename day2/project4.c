#include <stdio.h>

int main(){

    char date1[9];
    char date2[9];
    char mm1[3],jj1[3],aa1[3];
    char mm2[3],jj2[3],aa2[3];

    printf("Entrez la première date (mm/jj/aa) : ");
    scanf("%s",date1);

    printf("Entrez la deuxième date (mm/jj/aa) : ");
    scanf("%s",date2);


//strcpy(date1, "3/6/08");
//strcpy(date2, "5/17/07");

    int i = 0, j = 0;
    while (date1[i] != '/' && date1[i] != '\0') {
        mm1[j++] = date1[i++];
    }
    mm1[j] = '\0';
    i++;

     j = 0;
    while (date1[i] != '/' && date1[i] != '\0') {
        jj1[j++] = date1[i++];
    }
    jj1[j] = '\0';
    i++; 

     j = 0;
    while (date1[i] != '/' && date1[i] != '\0') {
        aa1[j++] = date1[i++];
    }
    aa1[j] = '\0';
    i++; 

    return 0;

}