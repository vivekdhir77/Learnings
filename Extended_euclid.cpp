#include<iostream>

using namespace std;

// ax + by = gcd(a,b) 
// gcd(a,b) = gcd(b, a%b)
// gcd(b, a%b) = bx + (a%b)y
// a%b = a-(a/b)*b

// from the above equations we get:

// ax + by = b x1 + (a%b) y1
// ax + by = b x1 + (a-(a/b)*b) y1
// ax + by = a y1 + b (x1 - (a/b)*y1)

// comparing LHS and RHS

// x = y1      and     y = (x1 - (a/b)*y1)

struct triplet
{
    int x,y, gcd;
};
/*
Base case:

gcd(d,0) = d

ax + 0 = a    -> x = 1 ,  y = 0
*/
triplet extendedEuclid(int a,int b)
{
    if(b == 0)
    {
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }

    triplet smallAns = extendedEuclid(b,a%b);
    triplet ans;

    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a/b) *smallAns.y;

    return ans;
}

int main()
{
    int a, b;
    cin>>a>>b;

    triplet ans = extendedEuclid(a,b);
    cout<<ans.gcd<<" "<<ans.x<<" "<<" "<<ans.y;
}