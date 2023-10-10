#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {10,20,5,7};
    cout<< "Sort normal array: ";
    sort(arr,arr+4);
    for(int x : arr){
        cout << x << " ";
    }
    vector<int> v = {7,5,20,10};
    cout<< "\nSort vector array: ";
    sort(v.begin(),v.end());
    for(int x : v){
        cout << x << " ";
    }

    return 0;
} 