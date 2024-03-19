/******************************************************************************

        Binary search in C language to find an element in a sorted array.;

*******************************************************************************/

#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];

  printf("\n Enter number of elements : ");
  scanf("%d", &n);

  printf("\n Enter %d integers : \n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("\n\nEnter value to find : ");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("\n %d found at location %d. ", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("\nNot found! %d isn't present in the list.\n", search);

  return 0;
}