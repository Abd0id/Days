#include <stdio.h>

int main()
{
    int a[10], i;
    int n = (int)(sizeof(a) / sizeof(a[0]));

    printf("Entrez %d nombres : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Dans l'ordre inverse : ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}