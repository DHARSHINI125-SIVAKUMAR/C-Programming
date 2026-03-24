#include <stdio.h>

int main()
{
    char src[100], dest[100];
    int i;

    scanf("%s", src);

    for(i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    printf("%s", dest);

    return 0;
}