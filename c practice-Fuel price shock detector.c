#include <stdio.h>

int main() {
    int N;
    int price;
    int highestPrice;
    int highPriceDays = 0;
    scanf("%d", &N);
    if(N > 0)
    {
        scanf("%d", &price);
        highestPrice = price;
    }
        for(int i = 1; i < N; i++)
        {
            scanf("%d", &price);

            if(price > highestPrice)
            {
                highestPrice = price;
            }

            if(price > 100)
            {
                highPriceDays++;        
            }

        printf("Highest Price: %d\n", highestPrice);
        printf("High Price Days: %d\n", highPriceDays);
    }

    return 0;
}