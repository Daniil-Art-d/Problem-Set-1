#include <stdio.h>

int main(void)
{
    int change;

    do
    {
        printf("Change owed: ");
        if (scanf("%d", &change) != 1)
        {
            return 1;
        }
    }
    while (change < 0);

    int coins = 0;
    coins += change / 25;
    change %= 25;
    coins += change / 10;
    change %= 10;
    coins += change / 5;
    change %= 5;
    coins += change;

    printf("%d\n", coins);
    return 0;
}