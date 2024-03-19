/******************************************************************************

        Selection sort in C to arrange numbers in ascending order;

*******************************************************************************/
#include <stdio.h>
int main ()
{
  int array[5], i, j, position, swap;

  printf ("Please Enter 5 numbers : \n");

  for (i = 0; i < 5; i++)
    scanf ("%d", &array[i]);

  for (i = 0; i < (5 - 1); i++)	// finding minimum element (n-1) times
    {
      position = i;

      for (j = i + 1; j < 5; j++)
	{
	  if (array[position] > array[j])
	    position = j;
	}
      if (position != i)
	{
	  swap = array[i];
	  array[i] = array[position];
	  array[position] = swap;
	}
      //Optinal part - displayed array after every round
      printf ("\n\n\nArray after round %d \n", i + 1);
      for (j = 0; j < 5; j++)
	printf ("%d\t", array[j]);
    }

  printf ("\n------------------------------------------");
  printf ("\n\n\nSorted list in ascending order:\n");

  for (i = 0; i < 5; i++)
    printf ("%d\t", array[i]);

  return 0;
}
