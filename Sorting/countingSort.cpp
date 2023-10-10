#include<iostream>
using namespace std;

/*
1. Not a comparison based algorithm
2. Time : Θ(n+k)
3. Aux Space: Θ(n+k)
4. Stable
5. Used as a subroutine in Radix Sort
*/

void countSort(int arr[],int n,int k){
    int count[k];
    for (int i = 0; i < k; i++){
        count[i] = 0;
    }
    for (int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++){
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for (int i = n-1; i >= 0; i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }    
}

int main(){
    int n=6,k=5;
    int arr[n]={1,4,4,1,0,1};
    cout << "Counting Sort = ";
    countSort(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}