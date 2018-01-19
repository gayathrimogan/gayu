include <stdio.h>
 

int gcd(int n, int t)
{

    if (n== 0 || t == 0)
       return 0;
 

    if (n== t)
        return a;
 
    if (n> t)
        return gcd(n-t, n);
    return gcd(n, t-n);
}
 

int main()
{
    int n = 78, t = 54;
    printf("GCD of %d and %d is %d ", n, t, gcd(n, t));
    return 0;
}
