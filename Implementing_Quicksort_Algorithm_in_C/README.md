# Test Question: Implementing Quicksort Algorithm in C 🚀
In this problem-solving test, you will be implementing the Quicksort algorithm in the C programming language to sort an array of integers. Quicksort is a highly efficient sorting algorithm that follows the divide-and-conquer approach.

Your task is to create a C program that sorts an array of integers using the Quicksort algorithm. You need to provide functions for partitioning the array and performing recursive sorting.

Requirements:

Implement the partition function that takes an array, a starting index, and an ending index as arguments. This function should rearrange the elements in the array such that all elements smaller than the pivot are on the left, and all elements greater than or equal to the pivot are on the right. Return the index of the pivot's final position.

Implement the quicksort function that takes an array, a starting index, and an ending index as arguments. This function should recursively sort the array using the Quicksort algorithm. The base case is when the subarray has one or zero elements.

Instructions:

Start by writing the partition function. Choose the last element as the pivot and rearrange the array accordingly. The pivot's final position should be returned.
Implement the quicksort function using the partition function. Recursively sort the subarrays on both sides of the pivot.

```bash
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quicksort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```