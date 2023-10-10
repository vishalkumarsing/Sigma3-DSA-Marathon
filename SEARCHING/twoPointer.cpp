#include<iostream>
using namespace std;

//O(n)

void isPair(int arr[], int n , int x){
    int left = 0, right = n-1;
    while(left<right){
        if(arr[left] + arr[right] == x){
            cout<<"YES"<<endl;
            break;
        }
        else if(arr[left] + arr[right] > x){
            right--;
        }
        else if(arr[left] + arr[right] < x){
            left++;
        }
        else{
            cout<<"NO"<<endl;
        }
    }   
}

//triplet with given sum : O(n^2)  (sorted & unsortedq)
/*
for(int i=0;i<n;i++){
    if(isPair(arr,i+1,n-1,x-arr[i])){
        return true;
    }
}
return false;
*/

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
    cout << "Finding element = ";
    cin>>x;
    
    cout<<"\nFind pair with a given sum(TRUE or FALSE) = ";
    isPair(arr,n,x);
    return 0;
}