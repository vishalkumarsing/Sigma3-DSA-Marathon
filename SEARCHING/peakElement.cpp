#include<iostream>
using namespace std;
//Navie solution : O(n)
int getPeak(int arr[],int n){
    if(n==1) return arr[0];
    else if(arr[0] >= arr[1]) return arr[0];
    else if(arr[n-1] >= arr[n-2]) return arr[n-1];
    for(int i=1;i<n-1;i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            return arr[i];
        }
    } 
}

//Efficient : O(log n)
//SC: O(1)

int Peak(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid])){
            return arr[mid];
        }
        else if(mid > 0 && arr[mid-1] >= arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the size of array= ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Peak Element = ";
    cout<<Peak(arr,n);
    return 0;
}