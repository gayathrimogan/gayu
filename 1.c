#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number <= 0)
    {
        if (number == 0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
