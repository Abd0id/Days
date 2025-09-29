#include <stdio.h>
#include <ctype.h>

int founded(char c)
{
    char *table[] = {"AEILNORSTU", "DG", "BCMP", "FHVWY", "K", "JX", "QZ", NULL};

    for (int i = 0; table[i]; i++)
    {
        for (int j = 0; table[i][j]; j++)
        {
           if (c == table[i][j])
                return (i + 1);
        }
    }
    return (0);
}

int main ()
{
    char str[1024];
    int res;
    char c;
    int i;

    printf("Entrez un mot : ");
    scanf("%1023s", str);
    i = 0;
    res = 0;
    while (str[i])
    {
        c = toupper(str[i]);
        res += founded(c);
        i++;
    }
    printf("%d\n", res);
    return (0);
}