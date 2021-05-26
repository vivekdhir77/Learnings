#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;

void Sieve_prime_factors(ll n){
    int spf[100000]={0};

    for (int i=0; i<=n; i++)
        spf[i]=i;
    
    
    for (int i=2; i*i<=n;i++){
        if (spf[i]==i){
            for (int j=i*i; j<=n; j+=i){
                if (spf[j]==j)
                    spf[j]=i;
            }
        }
    }
    while((n)!=1)
    {
        cout<<spf[n]<<"  ";
        n=n/spf[n];
    }
}


int main()
{
    int n; cin>>n;
    Sieve_prime_factors((n));
    

}