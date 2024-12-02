#include<stdio.h>

// Function to read the array
void readArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

// Function to print the array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}

// Function to find a subarray of size k with the given sum x
void subarrayWithSum(int arr[], int n, int k, int x) {
    int i, sum = 0;
    
    // Calculate the sum of the first window of size k
    for (i = 0; i < k; i++)
        sum += arr[i];
    
    // Check the first window
    if (sum == x) {
        printf("Subarray found: ");
        for (i = 0; i < k; i++)
            printf("%d\t", arr[i]);
        printf("\n");
        return;
    }
    
    // Sliding window to check other subarrays of size k
    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];  // Slide the window
        if (sum == x) {
            printf("Subarray found: ");
            for (int j = i - k + 1; j <= i; j++)  // Print the subarray
                printf("%d\t", arr[j]);
            printf("\n");
            return;
        }
    }
    
    // If no subarray found
    printf("No subarray of size %d with sum %d found.\n", k, x);
}

int main() {
    int arr[1000];
    int n, k, x;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the array elements: ");
    readArray(arr, n);

    // Print the array
    printf("Array elements: ");
    printArray(arr, n);
    printf("\n");

    // Input the size of the subarray and the target sum
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);

    printf("Enter the target sum (x): ");
    scanf("%d", &x);

    // Find the subarray
    subarrayWithSum(arr, n, k, x);

    return 0;
}

