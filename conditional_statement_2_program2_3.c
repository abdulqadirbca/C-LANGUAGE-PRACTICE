#include <stdio.h>
int main()
{
    int sell, buy, amount;  // creat variable
    printf("enter cost: "); // input from user
    scanf("%d %d", &sell, &buy);
    if ((sell > buy))
    {
        amount = sell - buy;
        printf("profit= %d\n", amount);
    }
    else if (buy > sell)
    {
        amount = buy - sell;
        printf("loss= %d\n", amount);
    }
    else
    {
        printf("no profit no loss\n");
    }
    return 0;
}
