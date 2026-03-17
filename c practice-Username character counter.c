#include <stdio.h>

int main()
{
    char username[100];
    int i = 0;

    scanf("%s", username);

    while(username[i] != '\0')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}