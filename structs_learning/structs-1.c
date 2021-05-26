#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define li long int
#define ll long long int


struct Employee
{
    int id;
    char name[53];
    float marks;
// here id,  name , marks are called members
};

int main()
{
    struct Employee e1;
    e1.id = 12;
    e1.marks = 34.12;
    // alternatate way---  struct Employee e1= {12, 34.12};
    // structure member operator (.)
    return 0; 
}
/*

########3#######################
Syntax: 

It's like a data type

struct [struct_name]
{
    //data_tyep var 2
    //data_tyep var 2
    //data_tyep var 3
}

########3#######################

struct creation type-1
-----------------------

struct Empploye
{
    int id;
    char name[53];
    float marks;
};

struct Employee e1, e2;

########3#######################

struct creation type-2
-----------------------

struct Empploye
{
    int id;
    char name[53];
    float marks;
}e1, e2;



*/