// C code for the recursive function of Quicksort
#include <stdio.h>

// Function to swap numbers
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Partition Function
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
    int j;
	for (j = low; j <= high - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);  
	return (i + 1);
}

// Quick Sort function
void quicksort(int Arr[], int low, int high)
{
	if (low < high) {
		// pi = Partition index
		int pi = partition(Arr, low, high);
		quicksort(Arr, low, pi - 1);
		quicksort(Arr, pi + 1, high);           
	}
}
// Main Function
int main()
{
	int size = 5;
	int array[size] = { 11,9,6,16,7 };

	quicksort(array, 0, size - 1);
    
    int i;
	for(i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}
}

