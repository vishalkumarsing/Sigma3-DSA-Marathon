#include<iostream>
using namespace std;

//Time :O(m+n)
//Aux Space : O(1)

void intersectionOfArray(int a[],int b[],int m,int n){
    int i=0,j=0;
    while (i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<< a[i] <<" ";
            i++;
            j++;
        }
    }
}


int main(){
    int a[4] ={2,10,20,20};
    int b[3] = {10,20,40};
    intersectionOfArray(a,b,4,3);
  return 0;
}