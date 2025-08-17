
#include<stdio.h>
int factorial(int x)
{
    int f;
    if (x == 0 || x == 1)
    {
        return 1; // a program to calculate factorial using recursion
    }
    else
    {
        f = x * factorial(x - 1);
        return f;
    }
}
int main(){
    int b;
    printf("enter any number:");
    scanf("%d",&b);
    printf("the factorial of %d is %d",b,factorial(b));
    return 0;
}


