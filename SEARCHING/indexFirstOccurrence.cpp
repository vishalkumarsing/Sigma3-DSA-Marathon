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

int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the searching element first occurrence in array = ";
    cin>>x;
    cout<<firstOccurrence(arr,n,x);
    return 0;
}