#include <stdio.h>

int main() {
    int year;

    printf("Enter a 4-digit year: ");
    scanf("%d", &year);

    printf("Last two digits = %d", year % 100);

    return 0;
}