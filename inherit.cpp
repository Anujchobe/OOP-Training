#include<iostream>
using namespace std;

class base
{
    int x;
    protected:
    int a;
    public:
    int y;
    void get1()
    {
        a=10;
        cout<<"Accessed base public method"<<endl;
    }
    void disp()
    {
        cout<<a<<endl;
    }
};
class derived:public base
{
    int z;
    public:
    void get2()
    {
        cout<<"Accessed derived public method"<<endl;
    }
};

int main()
{
    derived obj2;
    base obj1;
    obj1.get1();
    obj2.get2();
    obj2.get1();
    obj2.disp();
    return 0;
}