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

ll binexp_rec(ll base, ll pow)
{
    if (pow==0)
    return 1;
    ll temp = binexp_rec(base, (pow>>1));
    ll res = temp *temp;
    if (pow&1)
    res *= base;
    return res;
}

ll binexp_loop(ll base, ll pow)
{
    ll res=1;
    while(pow)
    {
        if (pow&1) res *=base;
        base*=base;
        pow/=pow;
    }
    return res;
}

int main()
{
    int t; cin>>t;
    while(t)
    {
    ll base, pow;
    cin>>base>>pow;
    cout << binexp_rec(base,  pow)<<"\n";
    }
}