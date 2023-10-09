#include<iostream>
using namespace std;

//Time : Θ(n)
//Aux Space : Θ(1) 

//Dutch National Flag Algorithm

void sort(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


int main(){
    int arr[6] = {0,1,2,1,1,2};
    sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}