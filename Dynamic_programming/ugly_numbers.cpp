#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int ugly_number[1000] ;


ll ugly_numbers(ll n)
{
    ugly_number[0] = 1;
    int i2=0,i5=0,i3=0;

    ll next_mul_of_2 = 2;
    ll next_mul_of_3 = 3;
    ll next_mul_of_5 = 5;
    ll next_ugly_no = 1;
    for(int i=1; i<n; i++)
    {
        next_ugly_no = min(next_mul_of_2, min(next_mul_of_3,next_mul_of_5));

        ugly_number[i] = next_ugly_no;

        if(next_ugly_no == next_mul_of_2)
        {
            i2 +=1;
            next_mul_of_2 = ugly_number[i2]*2;
        }
        if(next_ugly_no == next_mul_of_3)
        {
            i3 +=1;
            next_mul_of_3 = ugly_number[i3]*3;
        }
        if(next_ugly_no == next_mul_of_5)
        {
            i5 +=1;
            next_mul_of_5 = ugly_number[i5]*5;
        }
    }
    return next_ugly_no;
}

int main()
{
int n = 150;
    cout << ugly_numbers(n);
    return 0;
}