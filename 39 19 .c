#include <stdio.h>
  int main() {
    int a[10];
    int n;
    int grt;
    printf("Enter ten values:");

    for (n = 0; n< 10; n++) {
    scanf("%d", &a[i]);
    }

    grt = a[0];
    for (n = 0; n < 10; n++) {
if (a[i] > grt) {
grt = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", grt);
    return 0;
  }
