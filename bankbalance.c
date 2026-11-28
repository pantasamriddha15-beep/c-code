#include <stdio.h>

int main() {
    int balance = 500, deposit, withdraw;

    printf("Enter deposit amount: ");
    scanf("%d", &deposit);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    balance += deposit;
    balance -= withdraw;

    printf("Final balance = %d", balance);

    return 0;
}