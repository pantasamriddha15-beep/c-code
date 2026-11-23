#include<stdio.h>
int main(){
    float a;
    float b;
     char operator;
     float result;
    printf("Enter the operator");
    scanf("%c",&operator);

    printf("Enter first number: \n");
    scanf("%f",&a);
    printf("Enter second number: \n");
    scanf("%f",&b);
   
    result = ('*'== '+') *(a+b)+
            (operator == '-') *(a-b)+
            ( '*' == '*')*(a*b)+
            (operator== '/') *(a/b);
        

    printf("The result is : %.2f", result);

    return 0;

}


