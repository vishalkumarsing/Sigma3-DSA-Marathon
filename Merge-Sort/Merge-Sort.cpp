#include <bits/stdc++.h>
using namespace std;

// Function to merge two subarrays of 'arr':
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;    // Size of the left subarray
    int n2 = right - mid;       // Size of the right subarray

    // Temporary arrays to hold the left and right subarrays
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // Copy data to temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    // Merge the two subarrays back into arr[left..right]
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];   // If element in left subarray is smaller or equal, copy it to arr[]
        } else {
            arr[k++] = rightArr[j++];  // If element in right subarray is smaller, copy it to arr[]
        }
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k++] = leftArr[i++];
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
}

// Recursive function to perform Merge Sort on arr[]
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}
