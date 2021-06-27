#include<iostream>

using namespace std;

void InsertionSort(int *arr, int *x)
{
    int n = x - arr;
    for(int i= 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && key < arr[j]) // sorting in acending order
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[++j] = key;
    }
}

int main()
{
    int arr[] = {5,8,3,1,2,7,0};
    int n= sizeof(arr)/sizeof(int);
    InsertionSort(arr, arr+n);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
}