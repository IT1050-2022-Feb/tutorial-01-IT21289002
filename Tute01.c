/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total;
  float average;

  printf("Input mark1:");
  scanf("%d",&mark1);
  printf("Input mark2:");
  scanf("%d",&mark2);

  total=mark1 + mark2;
  average=total/2.0;

  printf("average of two marks is %2.f",average);

  return 0;
}

