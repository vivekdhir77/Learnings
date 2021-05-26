#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;

int main()
{
    FASTIO
    long long x,a,n,c;

    while(cin>>x>>a>>n>>c)
    {
        for(int i=0;i<n;i++)
        {
            x-=1;
            x=x*a%c;
        }
        cout<<((x+c)%c);
    }
}