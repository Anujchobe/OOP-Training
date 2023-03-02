#include<iostream>
using namespace std;

void add(int a,int b)
{
    try
    {
        cout<<"\nInside function";
        if (a<0)
        throw a;
    }
    catch(int e)
    {
        cout<<"\nException raised";
    }
    
}

int main()
{
    add(-1,10);
    return 0;
}