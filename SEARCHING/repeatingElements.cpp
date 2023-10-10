#include <iostream>
using namespace std;

//O(n)
int repeatingElement(int arr[],int n){
    int slow = arr[0], fast=arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);

    slow = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int findRepeating(int arr[],int n){
    int slow = arr[0]+1 , fast = arr[0] + 1;
    do{
        slow = arr[slow]+1;
        fast = arr[arr[fast] + 1] + 1;
    }while(slow!=fast);

    slow = arr[0] + 1;
    while(slow != fast){
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }
    return slow-1;
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
    // cout<<"Searching Repeating Element = ";
    // cout<<repeatingElement(arr,n)<<endl;
    cout<<"Searching Repeating Element (Optimised)= ";
    cout<<findRepeating(arr,n);
    return 0;
}