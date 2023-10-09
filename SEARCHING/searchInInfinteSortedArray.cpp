#include<iostream>
using namespace std;

//Efficient : O(log position)
int binarySearch(int arr[],int x,int low,int high);

int search(int arr[],int x){
    if(arr[0]==0) return 0;
    int i=1;
    while(arr[i]<x){
        i=i*2;
    }
    if(arr[i]==x) return i;
    return binarySearch(arr,x,i/2+1,i-1);
}

int binarySearch(int arr[],int x,int low,int high){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) high = mid-1;
        else low = mid+1;
    }
    return -1;
}


//Naive solution : O(position)
//Aux space : O(1)
int searching(int arr[],int x){
    int i = 0;
    while(true){
        if(arr[i] == x) return i;
        if(arr[i] > x) return -1;
        i++;
    }
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
    cout<<"Enter the searching element = ";
    cin>>x;
    cout<<search(arr,x);
    return 0;
}