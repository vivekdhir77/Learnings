#include<iostream>

int computeXOR(int n)// xor of numbers from 1->n
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
bool isPowerOfTwo(int x)// to check for power of 2
{
     // First x in the below expression is
     // for  the case when x is 0
     return x && (!(x & (x - 1)));
}

int main()
{

}