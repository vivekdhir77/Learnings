//binary exponentiation
#include<iostream>

int power(int base, int power)
{
    int res = 1;
    bool t=1;
    while (t){
    if (power == 0) return 1;
    else{
        if (power % 2 == 1) res =res * base;
        else{
            base = base * base;
            power = power /2;
        }
        if (power == 1)
        {
            return base*res;
            t=0;
        }
    }
    }
}

int main()
{
    std::cout << power (3,4);
}