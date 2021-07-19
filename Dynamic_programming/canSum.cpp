#include<iostream>
using namespace std;

bool canSum(int target, int* numbers)
{
    if(target==0)
    return true;
    if (target<0)
    return false;

    for(int i=0; i< 4; i++)
    {
        int rem = target - numbers[i];
        if(canSum(rem, numbers)== true)
        return true;
    }
    return false;
}


int main()
{
    int arr[] = {5,3,4,9};
    cout<<canSum(7,arr);

}