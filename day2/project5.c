#include <stdio.h>

int main()
{


    int n;

    printf("\nEntrez une note numérique: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 100) {
        switch (n / 10) {
            case 9:

                printf("Note littérale : A\n");
                break;

            case 8:

                printf("Note littérale : B\n");
                break;

            case 7:

                printf("Note littérale : C\n");
                break;

            case 6:

                printf("Note littérale : D\n");
                break;

            default:

                printf("Note littérale : F\n");
                break;
        }
    } else if (n > 100) {

        printf("\nInvalid input\n");
        return 1;

    }


    return 0;
}