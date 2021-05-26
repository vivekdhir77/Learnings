#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define li long int
#define ll long long int

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[25];
};

int main()
{
    struct student vivek, tejas,  mihir;
    vivek.id =1;
    tejas.id=2;
    mihir.id= 3;

    tejas.marks=460;
    vivek.marks=395;
    mihir.marks=450;

    vivek.fav_char='a';
    tejas.fav_char='b';
    mihir.fav_char='c';

    printf("Vivek got %d marks")
}