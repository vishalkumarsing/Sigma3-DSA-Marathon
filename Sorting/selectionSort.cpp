#include<iostream>
using namespace std;

//O(n^2) : Not stable , In-place(not use extra memory)
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mid_idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mid_idx]){
                mid_idx = j;
            }
        }
        swap(arr[i],arr[mid_idx]);
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
    selectionSort(arr,n);
    cout<<"Elements of After sorting array = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}