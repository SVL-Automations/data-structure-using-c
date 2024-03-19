/******************************************************************************

        Bubble sort in C to arrange numbers in ascending order;

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Declare variable for program    
    int array[5], i, j, swap;

    //Get numbers form user
    printf("\nPlease Enter 5 numbers : \n");
    for (i = 0; i < 5; i++)
        scanf("%d", &array[i]);

    for (i = 0 ; i < 5 - 1; i++)
        {
            for (j = 0 ; j < 5 - i - 1; j++)
            {
                if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
                {
                    swap       = array[j];
                    array[j]   = array[j+1];
                    array[j+1] = swap;
                }
            }
        
            //Optinal part - displayed array after every round
            printf("\n\n\nArray after round %d \n", i+1);
            for (j = 0; j < 5; j++)
                 printf("%d\t", array[j]);
        }
    printf("\n------------------------------------------");
    printf("\n\n\nSorted list in ascending order:\n");
    
    for (i = 0; i < 5; i++)
        printf("%d\n", array[i]);
    
    return 0;
}