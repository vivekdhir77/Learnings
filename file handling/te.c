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
#define in(t) int t;scanf("%d",&t);
#define pt(t) printf("%d",t);
#define tc(t) while(t--)

int main()
{
    VIVEK_DHIR

    int a =5, b=8;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("%d %d",a,b);
}