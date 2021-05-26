#include<iostream>
struct Rectangle
{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area (struct Rectangle r)
{
    return r.length * r.breadth;
}
void changelength(struct Rectangle *r, int l)
{
    r->length=l;
}
int main()
{
    struct Rectangle r;
    initialize (&r, 10, 5);
    std::cout<<area(r)<<std::endl;
    changelength(&r,20);
    std::cout<< r.length<<std::endl;
    std::cout<< r.breadth<<std::endl;
}