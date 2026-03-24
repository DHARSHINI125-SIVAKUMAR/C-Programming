#include <stdio.h>
float areaOfCircle(int r) {
    return 3.14*r*r;
}

int main() {
    int R;
    scanf("%d", &R);

    float area = areaOfCircle(R);
    printf("%.2f\n", area);

    return 0;
}