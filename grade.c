#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 80)
        printf("Distinction");
    else if (marks >= 60)
        printf("First Division");
    else if (marks >= 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}