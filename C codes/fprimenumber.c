#include <stdio.h>
void main()
{
    int n, i, j;
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("prime numbers.txt", "w");
    fprintf(fptr, "2\t");
    for (i = 3; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
            fprintf(fptr, "%d\t", i);
    }
    fclose(fptr);
}