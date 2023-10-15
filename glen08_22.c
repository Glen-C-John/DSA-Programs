#include <stdio.h>

/* insertion sorting function */
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

/* To display array */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	printf("\n");
}

int main()
{
    int n;
    printf("Enter the no of elements to be sorted: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    printf("\n\nBefore sorting:\n");
    printArray(arr, n);

    printf("\n\nAfter sorting:\n");
	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
