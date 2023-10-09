#include<iostream>
using namespace std;

//Time : O(n)
//Aux Space : O(1)
void lomutoPartition(int arr[],int l,int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    for (int i = 0; i <= h; i++)
    {
        cout<< arr[i] << " ";
    }
    
}

int main(){
    int arr[7] = {10,80,30,90,40,50,70};
    lomutoPartition(arr,0,6);
    return 0;
}