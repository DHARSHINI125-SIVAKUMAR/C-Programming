#include <stdio.h>

int main() {
    int salary;
    int absentDays;
    int finalSalary;
    scanf("%d%d", &salary , &absentDays);
   
    for(int i = 0; i < absentDays; i++)
    {
        salary = salary - 100;
    }
    finalSalary = salary;
    printf("Final Salary: ₹%d", finalSalary);
    return 0;
}