#include <stdio.h> 

/* to swap elements of arr at i and j */
void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 

/* selection sorting function */
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// one by one move partition of unsorted subarray 
	for (i = 0; i < n - 1; i++) { 
		// finding the minimum element in unsorted array 
		min_idx = i; 
		for (j = i + 1; j < n; j++){
			if (arr[j] < arr[min_idx]) {
				min_idx = j; 
			}
		}

		// swaping the found minimum element with the first one
		swap(arr, min_idx, i); 
	} 
} 

/* To display array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

/* bubble sorting function */
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++){
		// Last i elements are already 
		// in place 
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]){
				swap(arr, j, j + 1);
			}
		}
	}
} 

int main() 
{ 
	// User defined arrray
	int n;
    printf("Enter the no of elements to be sorted: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

	/*
	// Static array
	int arr[] = { 64, 25, 12, 22, 11 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	*/

	// for selection sort
	// selectionSort(arr, n); 

	// for bubble sort
    bubbleSort(arr, n);

	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
}
