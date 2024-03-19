#include<stdio.h>
 
// to get the element with maximum value
int getMax(int nums[], int n) {
    int max = nums[0];
    int i;
    for (i = 1; i < n; i++)
        if (nums[i] > max)
            max = nums[i];
    return max;
}
// Count Sort algorithm
void CountSort(int nums[], int n, int exp) {
    // to store a sorted array
    int output[n];
    
    // to keep count of values
    int i, cnt[10] = { 0 };
 
    // count number of values
    for (i = 0; i < n; i++)
        cnt[(nums[i] / exp) % 10]++;
 
    // count index for each
    for (i = 1; i < 10; i++)
        cnt[i] += cnt[i - 1];
 
    // place the elements at a particular index to sort the array
    for (i = n - 1; i >= 0; i--) {
        output[cnt[(nums[i] / exp) % 10] - 1] = nums[i];
        cnt[(nums[i] / exp) % 10]--; 
    }
 
    // copy output in nums
    for (i = 0; i < n; i++)
        nums[i] = output[i];
}

// RadixSort algorithm
void RadixSort(int nums[], int n) {
    int m = getMax(nums, n);

    // call CountSort algorithm for each digit 
    for (int exp = 1; m / exp > 0; exp *= 10)
        CountSort(nums, n, exp);
}
 
// print the array
void print(int nums[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", nums[i]);
}
 
// main function
int main() {
//     user input for the array
    printf("Enter number of elements: ");
    int N= 0;
    scanf("%d", &N);
    int nums[N];
    printf("Enter elements: ");
    for(int i=0; i<N; i++){
        scanf("%d", &nums[i]);
    }
    
    // calling RadixSort 
    RadixSort(nums, N);
    
    // printing sorted array
    printf("Sorted Array is: ");
    print(nums, N);
    return 0;
}