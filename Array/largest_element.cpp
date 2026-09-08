// Problem: Find Largest Element in Array
// Approach: Traverse the array and keep track of largest element.
// Time Complexity: O(n)
// Space Complexity: O(1)

int largest(int arr[], int n) {
    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}
