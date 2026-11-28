#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0)
        printf("Divisible by both 2 and 3");
    else if (n % 2 == 0)
        printf("Divisible by only 2");
    else if (n % 3 == 0)
        printf("Divisible by only 3");
    else
        printf("Divisible by neither 2 nor 3");

    return 0;
}