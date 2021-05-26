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
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif
    ll n,k;
    cin>>n>>k;
    double lg = k * log10 (n);
    double ch= pow(10,lg);
    cout<<lg <<endl;
    cout<<ch<<endl;
    ll res = pow (10, 2 +fmod(k * log10 (n),1));
    cout<<res;
}

// 2 fmod 1   = 0

// 2.1 fmod 1 = 0.1

// 1 + 1 + 0.1
// 10 fmod 1  =0.183