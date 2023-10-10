#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Assuming k ~ n
1.Best Case : Data is uniformly distirbuted , O(n).
2.Worst Case : All items go into a single bucket
Insertion Sort= O(n^2);
Normal Sort = O(nlog n)
*/

void bucketSort(int arr[], int n, int k)
{
    //Find max value
    int max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
    }
    max_val++;

    //Filing buckets
    vector<int> bkt[k];
    for (int i = 0; i < n; i++)
    {
        int bi = (k * arr[i]) / max_val;
        bkt[bi].push_back(arr[i]);
    }

    //Sort buckets
    for (int i = 0; i < k; i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }

    //Join buckets
    int index=0;
    for(int i=0;i<k;i++){
        for (int j = 0; j<bkt[i].size(); j++)
        {
            arr[index++] = bkt[i][j];
        }   
    }
}

int main()
{
    int n=7,k=4;
    int arr[n]={30,40,10,80,5,12,70};
    cout << "Bucket Sort = ";
    bucketSort(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}