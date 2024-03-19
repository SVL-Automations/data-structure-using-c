// An iterative implementation of quick sort
#include <stdio.h>

// Function for swapping two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// Partition function 
int partition(int arr[], int low, int high)
{
	int x = arr[high]; //this is pivot
	int i = (low - 1); // i index is used for swapping

	for (int j = low; j <= high - 1; j++) {
		if (arr[j] <= x) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1); 
}
void quicksort(int arr[], int low, int high)
{
	// Create a temporary array 
	int temp[high - low + 1]; 

	// initialize i variable with -1
	int i = -1;

	// add values of low and High
	temp[++i] = low; 
	temp[++i] = high;                          

	// remove all elements from the array
	while (i >= 0) {
		high = temp[i--];        
		low = temp[i--];

		// get the pivot element by using the partition algorithm
		int pi = partition(arr, low, high);

		// add index from 0 to pi-1 to array, if any
		if (pi - 1 > low) {
			temp[++i] = low;
			temp[++i] = pi - 1;
		}

		// add index of pi+1 to high to the array, if any
		if (pi + 1 < high) { //;;p:1
			temp[++i] = pi + 1;
			temp[++i] = high;
		}
	}
}

// Main function
int main()
{

	int array[] = { 11,9,6,16,7 };
    int size = sizeof(array) / sizeof(*array);
	quicksort(array, 0, size - 1);
	int i;
	for (i = 0; i < size; i++){
		printf("%d ", array[i]); }
}

