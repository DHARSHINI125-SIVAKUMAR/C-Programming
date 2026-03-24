#include <stdio.h>

int main()
{
    char str[100], ch;
    int i;

    scanf("%[^,], %c", str, &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}