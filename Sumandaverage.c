#include <stdio.h>
//Marvellouschris
/* Calculating the sum and averege marks of students */

int main()
{
  int i;
  float sum = 0, averg;
  arr_ay[100];
  
  printf("Enter Marks of students: ");
  for (i = 0; i < 100; i++);
  {
    scanf("%f", &arr_ay[i]);
    sum = sum + arr_ay[i]; //added sum to the number of student
    averg = sum/70; 
  }
  printf("\nMarks of student for sum are %3.f and average are %3.f", sum, averg);
}
  
