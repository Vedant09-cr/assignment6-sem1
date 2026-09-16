#include <stdio.h>

int main()
{
    int x, n, i, j;
    int power, fact;
    float s = 0;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        power = 1;
        fact = 1;

        for(j = 1; j <= i; j++)
        {
            power = power * x;
            fact = fact * j;
        }

        if(i % 2 == 1)
        {
            s = s + (float)power / fact;
        }
        else
        {
            s = s - (float)power / fact;
        }
    }

    printf("Sum of series = %f\n", s);

    return 0;
}