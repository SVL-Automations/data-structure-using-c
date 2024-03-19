/******************************************************************************

       C program to find smallest number in an array;

*******************************************************************************/

#include <stdio.h>
int main()
{
  int array[100], size, c, location = 0;

  printf("\nEnter the number of elements in array : ");
  scanf("%d", &size);

  printf("\nEnter %d integers : \n", size);
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
  {
    if (array[c] < array[location])
    {
      location = c;
    }
  }    

  printf("\n\nSmallest  element is present at location %d and its value is %d.\n", location+1, array[location]);
  return 0;
}