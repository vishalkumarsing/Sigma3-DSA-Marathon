#include<iostream>
#include<algorithm>
using namespace std;

//Time : Θ(nlog n)
//Aux Space : Θ(1) 

int getMinDiff(int arr[],int n){
    sort(arr,arr+n);
    int res = INT_MAX;

    for(int i=1;i<n;i++){
        res = min(res,arr[i]-arr[i-1]);
    }
    return res;
}

int main(){
    int arr[4] = {10,8,1,4};
    cout<<"Minimum Differences in array = "<<getMinDiff(arr,4);
    return 0;
}