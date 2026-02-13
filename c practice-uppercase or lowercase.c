#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter");
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Lowercase letter");
    }
    else {
        printf("Not an alphabet letter");
    }

    return 0;
}

