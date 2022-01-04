/******************************************************************************

Problem: Any year is entered through the keyboard. 
Write a function to determine whether the year is a leap year or not.
Solved by: Jyotirmoy Avro

*******************************************************************************/
#include<stdio.h>

void ly(int year)
{
  if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    printf("%d is a leap year!", year);
  else
    printf("%d is not a leap year.", year);
}

int main()
{
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);

  ly(year);

  return 0;
}
