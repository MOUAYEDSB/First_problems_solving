#include "header.h"
#include "stdio.h"

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	
	for (int x = low; x <= high - 1; x++){
		if (arr[x] <= pivot){
			i++;
			int temp = arr[i];
			arr[i] = arr[x];
			arr[x] = temp;
		}
	}
	int temp = arr[i + 1];
	arr[i + 1] =arr[high];
	arr[high] = temp;
}
void quicksort(int arr[], int low, int high) {
	if (low < high) {
		int pivotindex = partition(arr, low, high);
		quicksort(arr, low, pivotindex - 1);
		quicksort(arr, pivotindex + 1, high);
	}
}
