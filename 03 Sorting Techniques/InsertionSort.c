/* Insertion sort ascending order */

#include <stdio.h>

 int main () 
{
    int array[5], i, j, swap, flag = 0;
 
    //Get numbers form user
    printf ("\nPlease Enter 5 numbers : \n");
    for (i = 0; i < 5; i++)
        scanf ("%d", &array[i]);
  
    for (i = 1; i <= 5 - 1; i++)
    {
      
        swap = array[i];
        for (j = i - 1; j >= 0; j--)
	    {
            if (array[j] > swap)
	        {
                array[j + 1] = array[j];
                flag = 1;
            }
	        else
                break;
	
        }
        
        if (flag)
            array[j + 1] = swap;
            
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
