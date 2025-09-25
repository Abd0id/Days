#include <stdio.h>

int main()
{
    char date1[9];
    char date2[9];
    
    printf("Entrez la premiere date (mm/jj/aa) :");
    scanf("%8s", date1);

    printf("Entrez la deuxieme date (mm/jj/aa) :");
    scanf("%8s", date2);

    int month1 = (date1[0] - '0') * 10 + (date1[1] - '0');
    int month2 = (date2[0] - '0') * 10 + (date2[1] - '0');

    if (month1 < month2)
    {
        printf("%s est plus tot que %s\n", date1, date2);
        return 0;
    }
    else
    {
        printf("%s est plus tot que %s\n", date2, date1);
    }

    return 0;
}