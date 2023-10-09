#include<iostream>
using namespace std;

//Time : Θ(n)
//Aux Space : Θ(1) 

void seqPosNeg(int arr[],int n){
    int i=-1,j=n;
    while(true){
        do{
            i++;
        }while(arr[i]<0);
        do{
            j--;
        }while(arr[j]>=0);
        if(i>=j) return;
        swap(arr[i],arr[j]);
    }
}

int main(){
    int arr[4] = {-12,18,-10,15};
    seqPosNeg(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}