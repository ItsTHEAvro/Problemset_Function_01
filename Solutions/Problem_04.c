/******************************************************************************

Problem: Write a function to calculate GCD of two numbers.
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

int GCD(int a, int b)
{
    int i, cf;

    for(i = 1; i<=a && i<=b; i++)
    {
        if(a % i == 0 && b % i == 0) cf = i;
    }

    return cf;
}

int main()
{
    int n1, n2, res;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    res = GCD(n1, n2);

    printf("\nGCD of %d and %d is %d", n1, n2, res);

    return 0;
}
