#include<stdio.h>
int main(){
    int length;
    int breadth;
    int height;
    printf("Enter length:\n");
    scanf("%d",&length);
    printf("Enter breadth:\n");
    scanf("%d",&breadth);
    printf("Enter height:\n");
    scanf("%d",&height);
    int area = length*breadth*height ;
    printf("Area of rectangle is:%d\n",area);
    return 0;

}