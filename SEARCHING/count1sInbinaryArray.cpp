#include<iostream>
using namespace std;

int countOnes(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid-1]==0){
                return (n-mid);
            }
            else{
                high = mid -1;
            }
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

    cout<<countOnes(arr,n);

    return 0;
}