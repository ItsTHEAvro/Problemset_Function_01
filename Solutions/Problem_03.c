/******************************************************************************

Problem: Write a function to calculate LCM of two numbers.
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

int LCM(int a, int b)
{
    int max;
    max = (a > b) ? a : b;

    while(1)
    {
        if(max % a== 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}

int main()
{
    int n1, n2, res;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    res = LCM(n1, n2);

    printf("\nLCM of %d and %d is %d", n1, n2, res);

    return 0;
}
