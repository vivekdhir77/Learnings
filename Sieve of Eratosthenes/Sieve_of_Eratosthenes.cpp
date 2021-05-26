//print all the prime numbers from 1-n
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

void sieveprime(int n){
    
    ll prime[1000000000]={0};

    for (int i=2; i*i<=n;i++){
        if (prime[i]==0)
        for (int j=i*i; j<=n; j+=i){
            prime[j]=1;
        }
    }
    
    for (int i=2;i<=n;i++)
    if (prime[i]==0)
    printf("%d  ",i);
}


int main()
{
    int n; cin>>n;
    sieveprime(n);
}