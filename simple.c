#include<stdio.h>
int main(){
    int principle;
    int time;
    int rate;
    printf("Enter principle:\n");
    scanf("%d",&principle);
    printf("Enter time in years:\n");
    scanf("%d",&time);
    printf("Enter rate:\n");
    scanf("%d",&rate);
    int si = principle*time*rate/100;
    printf("Simple interest is:%d\n",si);
    return 0;

}