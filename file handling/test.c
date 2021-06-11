#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef long int li;
typedef long long int ll;
#define VIVEK_DHIR
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define FD(i, start, end) for (int i = start; i >= end; i--)
#define in(t) \
    int t;    \
    scanf("%d", &t);
#define pt(t) printf("%d", t);
#define tc(t) while (t--)

void solve(FILE *ptr)
{
    int n;
    fscanf(ptr, "%d", &n);
    int ar[n];
    FA(i, 0, n)
    {
        fscanf(ptr, "%d", &ar[i]);
    }
    FA(i, 0, n)
    {
        printf("%d\n", ar[i]);
    }
}

int main()
{
    // char arr[4][30];
    FILE *ptr;
    ptr = fopen("input1.txt", "r");
    in(t);
    tc(t)
    {
        solve(ptr);
    }
}