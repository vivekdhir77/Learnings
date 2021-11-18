#include<iostream>
using namespace std;

ll arrangeTile(ll n, ll m, ll dp[])
{
    if (n < m)
    {
        dp[n] = 1;
        return 1;
    }
    else if (n == m)
    {
        dp[n] = 2;
        return 2;
    }
    else
    {
        dp[n] = arrangeTile(n - 1, m, dp) + arrangeTile(n - m, m, dp);
    }
    return dp[n];
}



int main(){
    int nos[] = {1,2,3,4,5,6};
    int n = (*(&nos+1)-nos);
    cout<< (&nos) <<endl;
    cout<< (&nos+1)<<endl;
    cout<< (*(&nos+1))<<endl;
    cout<< nos<<endl;
    cout<<n<<endl;
}
