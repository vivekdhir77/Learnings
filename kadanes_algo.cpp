
#include <iostream>
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int kadanes(int arr[],int n)
{
    int max=0, temp=0;
    for(int i=0; i<n;i++)
    {
        temp += arr[i];
        if(max<temp)
        {
            max =temp;
        }
        if(temp<0)
        {
            temp = 0;
        }
    }
    return max;
}

int main()
{
    VIVEK_DHIR
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = kadanes(arr,n);
    cout<<max;
}