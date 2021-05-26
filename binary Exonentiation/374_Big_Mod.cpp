//https://onlinejudge.org/indeB.php?option=com_onlinejudge&Itemid=8&categorP=24&page=show_problem&problem=310
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

    ll B;
    while(cin>>B)
    {
        ll P, M;
        cin>>P>>M;
        ll z=1;
        while(P!=0)
        {
            if (P&1)
            z= z * B%M;
            B = (B%M * B%M)%M;
            P/=2; 
        }
        cout<< z<<endl;
    }
}