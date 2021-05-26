/*

The following algorithm generates the next permutation lexicographically after a given permutation. 
It changes the given permutation in-place.

1. Find the largest index k such that a[k] < a[k + 1]. If no such index exists, 
the permutation is the last permutation.

2. Find the largest index l greater than k such that a[k] < a[l].

3. Swap the value of a[k] with that of a[l].

4. Reverse the sequence from a[k + 1] up to and including the final element a[n].

*/

#include<stdio.h>
#include<string.h>

void lexicographic()
{
    char lexi[100];
    scanf("%s",lexi);
    int k=-1;
    int l = -1;
    int len = strlen(lexi);
    for (int i= len-1; i>=0; i--)
    {
        
    }
}


int main()
{
    lexicographic();
}