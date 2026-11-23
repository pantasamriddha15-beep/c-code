#include<stdio.h>

int main(){
    int a = 10;
    char letter = 'z';
    float balance = 10.33;
    // Formatted output operator
    printf("The value of a is %d\n",a+5);
    printf("The value of letter is %c\n",letter);
    printf("The value of balance is %f\n",balance);
    
    // Formatted input operator

    int age;
    printf("Enter age: \n");
    scanf("%d",&age);
    printf(" your age is:%d\n",age);
    return 0;
}