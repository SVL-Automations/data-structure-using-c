/******************************************************************************

        Linear search C program for multiple occurrences;

*******************************************************************************/

#include <stdio.h>
 
int main()
{
   int array[100], search, c, n, count = 0;
   
   printf("\nEnter number of elements in array : ");
   scanf("%d", &n);
   
   printf("\nEnter %d numbers : \n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
     
   printf("\n\nEnter a number to search : ");
   scanf("%d", &search);
   
   for (c = 0; c < n; c++) {
      if (array[c] == search) {
         printf("\n %d is present at location %d.", search, c+1);
         count++;
      }
   }
   if (count == 0)
      printf("\n %d isn't present in the array.\n", search);
   else
      printf("\n %d is present %d times in the array.\n", search, count);
     
   return 0;
}