#include<iostream>
using namespace std;

int hoarePartition(int arr[],int l,int h){
    int pivot = arr[l];
    int i = l-1 ,j = h+1;
    while(true){
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j) return j;
        swap(arr[i],arr[j]);        
    }  
}

void qSort(int arr[], int l, int h) {
    Begin:
    if (l < h) {
        int p = hoarePartition(arr, l, h);
        qSort(arr, l, p);
        l = p+1;
        goto Begin;
    }
}

int main() {
    int arr[7] = {8, 4, 7, 9, 3, 10, 5};
    qSort(arr, 0, 6);

    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
