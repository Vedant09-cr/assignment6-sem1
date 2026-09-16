#include <stdio.h>

int main()
{
    int choice, n, temp, r, rev, sum, count, i, prime;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                temp = n;
                rev = 0;

                while(n > 0)
                {
                    r = n % 10;
                    rev = rev * 10 + r;
                    n = n / 10;
                }

                if(temp == rev)
                    printf("It is a Palindrome.\n");
                else
                    printf("It is not a Palindrome.\n");

                break;


            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while(n > 0)
                {
                    r = n % 10;
                    sum = sum + (r * r * r);
                    n = n / 10;
                }

                if(temp == sum)
                    printf("It is an Armstrong Number.\n");
                else
                    printf("It is not an Armstrong Number.\n");

                break;


            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);

                prime = 1;

                if(n < 2)
                {
                    prime = 0;
                }
                else
                {
                    for(i = 2; i < n; i++)
                    {
                        if(n % i == 0)
                        {
                            prime = 0;
                            break;
                        }
                    }
                }

                if(prime == 1)
                    printf("It is a Prime Number.\n");
                else
                    printf("It is not a Prime Number.\n");

                break;


            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);

                sum = 0;

                while(n > 0)
                {
                    r = n % 10;
                    sum = sum + r;
                    n = n / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;


            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);

                count = 0;

                if(n == 0)
                {
                    count = 1;
                }
                else
                {
                    while(n > 0)
                    {
                        count++;
                        n = n / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;


            case 6:
                printf("Exiting program...\n");
                break;


            default:
                printf("Invalid choice! Please enter 1 to 6.\n");
        }

    } while(choice != 6);

    return 0;
}