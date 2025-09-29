#include <stdio.h>
#include <unistd.h>

int main()
{
    char str[1024];
    int i;
    char c;

    printf("Entrez un numéro de téléphone : ");
    scanf("%1023s", str);

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = (str[i] - 'A') / 3 + 2 + '0';
            printf("%c", c);
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
