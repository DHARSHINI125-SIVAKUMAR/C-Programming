#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}
int main() {
    int A, B;
    char choice;
    
    scanf("%d %d %c", &A, &B, &choice);  
    
    switch (choice) {
        case '+':
            printf("%d\n", add(A, B));
            break;
        case '-':
            printf("%d\n", subtract(A, B));
            break;
        case '*':
            printf("%d\n", multiply(A, B));
            break;
        case '/':
            printf("%.2f\n", divide(A, B));
            break;
        default:
            printf("Invalid Choice\n");
    }
    
    return 0;
}