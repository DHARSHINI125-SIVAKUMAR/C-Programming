#include <stdio.h>
int main() {
    int N;
    int marks;
    int total = 0;
    int failedSubjects = 0;
    int average;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &marks);

        total = total + marks;   

        if(marks < 40) {        
            failedSubjects++;
        }
    }

    average = total / N;

    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d\n", failedSubjects);

    return 0;
}