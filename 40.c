#include <stdio.h>
int main()
{
    int a, n, s1 = 0, s2 = 1, nt;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (a = 1; a <= n; ++a)
    {
        printf("%d, ", s1);
        nextTerm = s1 + s2;
        s1 = s2;
        s2 = nt;
    }
    return 0;
}
