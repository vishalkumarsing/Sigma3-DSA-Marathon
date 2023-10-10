#include<iostream>
using namespace std;

/*
General : O(n^2)
Worst case : Θ(n^2) (reverse sorted array)
Best case : Θ(n) (sorted array)
In-Place
Stable
Used in small array
*/

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"Elements of After sorting array = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}