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
//#include<conio.h>
/*
1. fopen(name, r/w/a/r+/w+/a+) :- 
2. fscanf( file pointer, Format specifiers , variables) -
    E.g:- fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);


3. fgets(variable name, size of string, file pointer) / (getline()in C++)  - 
         it ignors spaces and takes whole
                thing as string.
                it adds white space before input
3. fprintf()

4. fputs(variable, file pointer)

5. fgetc()

    eg: (s=fgetc(f))!=EOF)

6. fputc()

*/
int main()
{
    //clrscr();
    VIVEK_DHIR
    char name[100] = "input1.txt";
    //scanf("%s", name);
    FILE *ptr;
    ptr = fopen(name, "rw");
    // printf("%d\n",ptr);
    if (!ptr)
        printf("no file found\n");
    else
        printf("file found\n\n");

    int str1 = 0;
    int ab =77;
    //while (fscanf(ptr, "%d", &str1) != EOF)
    //{
        fprintf(ptr, "%d" ,ab);
    //}
}