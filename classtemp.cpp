#include<iostream>
using namespace std;


template<typename T,typename U>
class templ
{
    public:
    void fun1(T a ,U b)
 {
    cout<<"\nFirst: "<<a;
    cout<<"\nSecond: "<<b;
 }
 void fun2(T t)
 {
    cout<<"\nFirst: "<<t;
 }
};



int main()
{
    templ<int, int> obj;
    obj.fun1(5,5);
    templ <int,char> obj2;
    obj2.fun1(5,'a');
    obj2.fun2('A');
    return 0;
}