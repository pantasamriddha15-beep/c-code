#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    n += 10;
    n *= 2;
    n -= 5;

    printf("Final value = %d", n);

    return 0;
}