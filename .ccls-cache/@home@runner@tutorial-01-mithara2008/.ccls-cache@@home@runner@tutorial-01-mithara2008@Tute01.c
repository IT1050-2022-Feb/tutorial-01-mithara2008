/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int marks1,marks2,sum;
  float avg;
  
  printf("Enter the marks :");
  scanf("%d %d",&marks1);1

  printf("Enter the marks :");
  scanf("%d %d",&marks2);

  sum = marks1 + marks2;
  
  avg = sum / 2.0;

  printf("Average is %.2f",&avg);
  
  return 0;
}

