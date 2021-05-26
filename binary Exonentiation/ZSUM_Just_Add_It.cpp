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

int p= 10000007;
ll binexp_loop(ll base, ll pow)
{
    ll res=1;
    while(pow)
    {
        if (pow&1) res =res*base%p;
        base=base * base%p;
        pow= pow>>1;
    }
    return res;
}

int main()
{
    FASTIO
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    #endif
    ll n, k;
    while(cin>>n>>k)
    {
        ll res1 = (2* binexp_loop((n-1),k)%p+ 2* binexp_loop((n-1),(n-1))%p)%p;
        ll res2= (binexp_loop(n, k)%p+binexp_loop(n, n)%p)%p;
        ll res =(res1+res2)%p;
        cout<<res<<endl;
    }
}