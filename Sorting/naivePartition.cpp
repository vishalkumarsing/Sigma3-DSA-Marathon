#include <iostream>
using namespace std;

//Time : O(n)
//Aux Space : O(n)
void naivePartition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i < h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i < h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i < h; i++)
    {
        arr[i] = temp[i-l];
        cout<< arr[i] <<" ";
    }
}

int main()
{
    int arr[7] = {5, 13, 6, 9, 12, 11, 8};
    naivePartition(arr, 0, 7, 6);
    return 0;
}