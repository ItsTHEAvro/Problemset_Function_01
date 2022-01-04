/******************************************************************************

Problem: Write a function power(a,b) to calculate the value of a raised to b.
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

long int power(int a, int b)
{
    long int res=1;
    int i;

    for(i = 1; i<=b; i++)
    {
        res = res*a;
    }

    return res;
}

int main()
{
    int a, b;
    long int res;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);

    res = power(a, b);

    printf("%d raised to the power %d is %ld.", a, b, res);

    return 0;
}
