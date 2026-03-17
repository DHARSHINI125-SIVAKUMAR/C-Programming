#include <stdio.h>

int main()
{
    char s[100];
    int i;

    scanf("%s", s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            printf("Valid");
            return 0;
        }
    }

    printf("Invalid");

    return 0;
}