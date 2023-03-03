#include<iostream>
using namespace std;

template<class t>
 void fun(t n)
 {
    cout<<"\nNumber is: "<<n;
 }

int main()
{
    fun(5);
    fun("Hello World");
    fun(5.5);
    return 0;
}