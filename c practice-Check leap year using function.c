#include <stdio.h>
const char* checkLeapYear(int year) {
    if (year % 400==0) {
        return "Leap Year";
    } else if (year % 100==0) {
        return "Not Leap Year";
    } else if (year % 4==0) {
        return "Leap Year";
    } else {
        return "Not Leap Year";
    }
}

int main() {
    int year;
    scanf("%d", &year);
    printf("%s\n", checkLeapYear(year));
    
    return 0;
}