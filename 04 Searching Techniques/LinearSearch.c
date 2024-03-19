/******************************************************************************

        Linear search in C to find whether a number is present in an array;

*******************************************************************************/

#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("\nEnter number of elements in array : ");
  scanf("%d", &n);

  printf("\nEnter %d integer(s) : \n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("\n\nEnter a number to search : ");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}