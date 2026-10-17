#include <stdio.h>

int main()
{
    int height;
    do
    {
        printf("Set height (1-8): ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int c = 0; c < height - i; c++)
        {
            printf(" ");
        }
        for (int c = 0; c < 2 * i - 1; c++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}