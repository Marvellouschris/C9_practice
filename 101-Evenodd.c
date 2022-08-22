#include <stdio.h>
// Marvellouschris
/* write integers to count the total
number of even and odd elements */

int main()
{
  int j, size, Arr_stg[];
  int evenNum = 0, oddNum = 0;
  
  printf("Enter Integers size of arrays: ");
  scanf(" %d", &size); // stores the size of an array inputed
  
  printf("\nEnter Integers Numbers: ");
  for (j = 0; j < size; j++) 
    {
    scanf(" %d", &Arr_stg[j]);
    if (Arr_stg[j] % 2 == 0) 
      {
      evenNum++;
      }
    else
      {
      oddNum++;
      }
    }
  printf("\nNumber of even integers are: %d",evenNum);
  printf("\nNumber of odd Integers are: %d",oddNum);
}
