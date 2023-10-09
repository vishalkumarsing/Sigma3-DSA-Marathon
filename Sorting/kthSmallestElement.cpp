#include<iostream>
using namespace std;

//Θ(n^2)
//Avg case : Θ(n) , random pivot -> linear -> Quick Select algo

int lomutoPartition(int arr[], int l, int h) {
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

int kthSmallestElement(int arr[],int n,int k){
    int l=0,r=n-1;
    while(l<r){
        int p = lomutoPartition(arr,l,r);
        if(p==k-1){
            return arr[p];
        }
        else if(p>k-1){
            r=p-1;
        }
        else{
            l=p+1;
        }
    }
    return -1;
}

void qSort(int arr[], int l, int h) {
    if (l < h) {
        int p = lomutoPartition(arr, l, h);
        qSort(arr, l, p - 1);
        qSort(arr, p + 1, h);
    }
}

int main(){
    int arr[7] = {10, 4, 5, 8, 11, 6, 26};
    qSort(arr,0,6);
    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    int k;
    cout<<"\nEnter the kth element: ";
    cin>>k;

    cout<<k <<" smallest element in array: " <<kthSmallestElement(arr, 7, k);
    return 0;
}