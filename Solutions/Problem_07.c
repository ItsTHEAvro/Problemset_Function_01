/******************************************************************************

Problem: Write a function which receives a float and an int from main(), 
finds the product of these two and returns the product which is printed through main().
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

double mult(float a, int b)
{
    return a*(double)b;
}

int main()
{
    float a;
    int b;
    double res;
    
    printf("Enter a decimal number: ");
    scanf("%f", &a);
    
    printf("Enter an integer: ");
    scanf("%d", &b);
    
    res = mult(a, b);
    printf("%.2f x %d = %.2lf", a, b, res);
    
    return 0;
}
