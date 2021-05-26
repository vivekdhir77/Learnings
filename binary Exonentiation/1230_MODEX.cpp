//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671
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

void solve()
{
    ll x, n, y;
    cin>>x>>y>>n;
    ll z=1;
    while(y!=0)
    {
        if (y&1)
        z= z * x%n;
        x = (x%n * x%n)%n ;
        y/=2; 
    }
    cout<< z<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}