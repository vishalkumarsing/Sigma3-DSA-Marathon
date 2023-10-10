#include<iostream>
using namespace std;

//Recursive : O(log n)
int lastOccurrence(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target){
            high = mid-1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}

//Iterative : O(1)
int lastOcc(int arr[],int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == mid){
            return mid;
        }
        else if(arr[mid]>x){
            high = mid - 1;
        }
        else if(arr[mid]<x){
            low = mid + 1;
        }
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                low = mid + 1;
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

    int x;
    cout<<"Enter the searching element last index = ";
    cin>>x;
    cout<<lastOccurrence(arr,n,x)<<endl;
    cout<<lastOcc(arr,n,x);
    return 0;
}