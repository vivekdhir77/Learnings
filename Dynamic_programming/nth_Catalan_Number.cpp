#include<bits/stdc++.h>

using namespace std;

#define ll long long int


// using recursion
ll nthCatNo(int n)
{
    if(n<=1)
    return 1;

    ll ans = 1;
    for(int i=2; i<n; i++)
        ans+= nthCatNo(i)*nthCatNo(n-i-1);
    return ans;
}

//using dynamic programming
ll catNo(ll n)
{
    ll dp[n+1]={};

    dp[0]=dp[1] =1;

    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<i; i++)
            dp[i] += dp[j]*dp[i-j-1];
    }
    return dp[n];
}

//using binomial coeff
unsigned long int binomialCoeff(unsigned int n, unsigned int k) 
{ 
	unsigned long int res = 1; 

	// Since C(n, k) = C(n, n-k) 
	if (k > n - k) 
		k = n - k; 

	// Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1] 
	for (int i = 0; i < k; ++i) 
	{ 
		res *= (n - i); 
		res /= (i + 1); 
	} 

	return res; 
} 


unsigned long int catalan(unsigned int n) 
{ 
	// Calculate value of 2nCn 
	unsigned long int c = binomialCoeff(2*n, n); 

	// return 2nCn/(n+1) 
	return c/(n+1); 
} 

int main()
{

}