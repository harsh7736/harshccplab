

#include <stdio.h>
float average(int a, int b,int c){
    return (float)(a+b+c)/3;
}
int main()
{
    int num1, num2,num3;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number :");
    scanf("%d",&num3);

    avg = average(num1, num2 ,num3);

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d ,%d and %d is: %.2f",num1,num2,num3,avg);

    return 0;
}