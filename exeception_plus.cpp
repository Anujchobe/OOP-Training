#include<iostream>
#include<exception>
using namespace std;
void addNumber(int n1,int n2)
{
    try
    {
        cout<<"\n Inside function";
        if(n1<0)
        throw n1;

    }
    catch(int n1)
    {
        cout<<"\n Exeption raised"<<n1;
    }
    
}
class Number
{

};
class derive:public Number
{

};


int main()
{
    addNumber(-1,5);
    derive obj;
    try
    {
        throw obj;
    }
    catch(derive obj)
    {
        cout<<"derived raised";
    }
    try
    {
        throw obj;
    }
    catch(Number obj)
    {
        cout<<"base raised";
    }
    

    return 0;
}