#include<iostream>
using namespace std;

int sqRootFloor(int x){
    int low=1,high=x,ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int mSq = mid*mid;
        if(mSq==x){
            return mid;
        }
        else if(mSq>x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

//Navie solution : O(sqrt(x))

int sqRoot(int x){
    int i=1;
    while (i*i <= x)
    {
        i++;
    }
    return (i-1);
}

int main(){
    int x;
    cout<<"Enter the element whose Sqaure root Find = ";
    cin>>x;

    cout<<sqRootFloor(x)<<endl;
    cout<<sqRoot(x);


    return 0;
}