#include<iostream>
using namespace std;


template<typename T, typename U>


 void fun1(T a ,U b)
 {
    cout<<"\nFirst: "<<a;
    cout<<"\nSecond: "<<b;
 }

int main()
{
    fun1(5,10);
    fun1("Hello World",8);
    fun1(5.5,"a");
    fun1(5,5);
    
    return 0;
}