#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[100];
    int decimal = 0;
    int length;
    scanf("%s", binary);
    length = strlen(binary);
    for(int i = 0; i < length; i++) {
        if(binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    printf("%d", decimal);

    return 0;
}
