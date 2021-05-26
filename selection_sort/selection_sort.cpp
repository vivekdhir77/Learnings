#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;

const int N= 1e6;
int a[N];

void swap(int *a, int *b)
{
    int temp =*a;
    *a=*b;
    *b= temp;
}
void selectionSort(int n)
{
    for (int i=0; i<n;i++)
    {
        int minIndex=i;
        for (int j=i+1; j<n;j++)
        {
            if (a[minIndex]<a[j])
            {
                minIndex=j;
            }
        }
        swap(&a[minIndex], &a[i]);
    }
}



int main()
{
    int n; cin>>n;

    for (int i=0; i<n;i++)
    cin>>a[i];

    selectionSort(n);

    for (int i=0; i<n;i++)
    cout<<a[i]<<" ";
    

}