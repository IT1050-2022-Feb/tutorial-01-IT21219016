/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//standard input output header
int main()//main function begins program execution 
{
  int i, range;
  int sum = 0;

  printf( "Enter the range :");//Display the range
  scanf( "%d", &range);//Input the range

  for(i = 1; i <= range; i++)//for loop
  {
    sum = sum + i;//calculation
  }

  printf( "Sum is %d", sum);//Display the sum
  
  return 0;
}//end of main function

