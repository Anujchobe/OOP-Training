#include<iostream>
using namespace std;

class base
{
    public:
    int i;
};
class der1:public base
{

};
class der2:public base
{

};
class der3:public der1,der2
{

};
int main()
{
    der3 obj;
    obj.der1::i=10;  
    return 0;
}