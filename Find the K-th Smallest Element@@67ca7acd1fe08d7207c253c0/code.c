void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the K-th smallest element
int KthSmallest(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        return -1; // K is out of range
    }
    sortArray(arr, n); // Sort the array
    return arr[k - 1]; // Return the K-th smallest element
}