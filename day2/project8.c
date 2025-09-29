#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("entrer un nombre : ");
    scanf("%d", &n);
    i = 2;
    while (i < n && i * i <= n)
    {
        printf("%d\n", i * i);
        i += 2;
    }
    return (1);
}