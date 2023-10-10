#include<iostream>
using namespace std;

//Θ(m+n)
void merge(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}

int main(){
    int m;
    cout<<"Enter the size of 1st array = ";
    cin>>m;

    int a[m];
    cout<<"Enter the elements of 1st array = ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    int n;
    cout<<"Enter the size of 2nd array = ";
    cin>>n;

    int b[n];
    cout<<"Enter the elements of 2nd array = ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    merge(a,b,m,n);
    return 0;
}