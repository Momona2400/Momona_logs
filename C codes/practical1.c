#include <stdio.h>
void main()
{
    char str1[20], str2[20];
    int i, d1 = 0, d2 = 0;
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        d1++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        d2++;
    }
    if (d1 != d2)
        printf("Strings are not identical.");
    else
    {
        i = 0;
        while (i < d1)
        {
            if (str1[i] != str2[i])
                break;
            i++;
        }
        if (i == d1)
            printf("Strings are identical.");
        else
            printf("Strings are not identical.");
    }
}