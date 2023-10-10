#include<iostream>
using namespace std;

int binarySearch(int nums[],int n,int target){
    int low =0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

// int recursiveBinarySearch(int nums[],int low,int high,int target){
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(nums[target] == mid){
//             return mid;
//         }
//         else if(nums[mid] > target){
//             return recursiveBinarySearch(nums,low,mid-1,target);
//         }
//         else{
//             return recursiveBinarySearch(nums,mid+1,high,target);
//         }
//     }
//     return -1;
// }

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
    cout<<"Enter the searching  element of array = ";
    cin>>x;
    cout<<binarySearch(arr,n,x)<<endl;

    // cout<<recursiveBinarySearch(arr,0,n,x);
    return 0;
}