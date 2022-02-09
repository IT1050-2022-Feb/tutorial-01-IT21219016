/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//standard input output header

int main() ///main function begins program execution
{

  int sub1, sub2;//Declaration of variables
  float avg = 0;//declaration and initialize the variables

  printf(" Enter the marks of subject 1 :");//Display the marks of subject 1
  scanf( "%d", &sub1);//input the mark of subject 1

  printf(" Enter the marks of subject 2 :");//Display the marks of subject 2
  scanf( "%d", &sub2);//input the mark of subject 2

  avg = (sub1 + sub2) / 2.0;//calculation of average

  printf( "Average of two subjects %.2f", avg); // Display the average

 return 0;

}//end of main function

