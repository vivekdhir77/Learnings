#include<iostream>
#include<cmath>
#include <numeric>
#include<algorithm>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;

int gcd(ll a, ll b)
{
    if (a==0)
        return 0;
    else if (b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    //int a; cin>>b;
    cout<< __gcd(98,56);
}