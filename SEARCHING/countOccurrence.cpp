#include<iostream>
using namespace std;

int firstOccurrence(int nums[],int n,int target){
    int low =0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]>target){
            high = mid-1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            if(nums[mid]==0 || nums[mid-1]!=nums[mid]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

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

//Worst Case : O(log n) 
int countOccurrence(int arr[],int n,int x){
    int first = firstOccurrence(arr,n,x);
    if(first==-1) return 0;
    else{
        return (lastOccurrence(arr,n,x) - first + 1);
    };
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
    cout<<"Enter the element whose occurrence count = ";
    cin>>x;
    cout<<countOccurrence(arr,n,x);
    return 0;
}