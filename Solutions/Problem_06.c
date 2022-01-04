/******************************************************************************

Problem: A prime integer is entered through the keyboard.
Write a function to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3 whereas prime factor of 35 are 5 and 7.
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

void prime_factors(int n)
{
  int i;
  for(i = 2; i <= n; i++)
    {
      if(n % i == 0)
      {
          printf("%d ", i);
          n = n / i;
          i--;
      }
    }
}

int main()
{
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  printf("Prime factors of %d are: ", n);
  prime_factors(n);

  return 0;
}
