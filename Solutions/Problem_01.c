/******************************************************************************

Problem: Write a function to calculate the factorial value of any integer entered through the keyboard.
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

long int factorial(int n)
{
  long int res = n;
  
  while(n > 1)
    {
      res = res * (n - 1);
      n--;
    }

  return res;
}

int main()
{
  int n;
  long int fact;

  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n < 0)
    {
      printf("Only positive numbers are allowed!\n");
    }
  else
    {
      fact = factorial(n);
      printf("The factorial of %d is %ld", n, fact);
    }

  return 0;
}
