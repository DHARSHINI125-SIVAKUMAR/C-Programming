#include <stdio.h>
int main()
{
    int n, i = 0;
    int balance, transaction, low = 0;
    int prev_balance;
#include <stdio.h>
int main()
{
    int n, i = 0;
    int balance, transaction, low = 0;
    int prev_balance;

    scanf("%d", &n);
    scanf("%d", &balance);

    while(i < n)
    {
        prev_balance = balance;   
        scanf("%d", &transaction);
        balance = balance + transaction;

        if(prev_balance >= 2000 && balance < 2000)
            low++;

        i++;
    }

    printf("final balance: %d\n", balance);
    printf("low balance days: %d\n", low);

    return 0;
}
    scanf("%d", &n);
    scanf("%d", &balance);

    while(i < n)
    {
        prev_balance = balance;   
        scanf("%d", &transaction);
        balance = balance + transaction;

        if(prev_balance >= 2000 && balance < 2000)
            low++;

        i++;
    }

    printf("final balance: %d\n", balance);
    printf("low balance days: %d\n", low);

    return 0;
}