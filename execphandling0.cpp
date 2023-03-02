#include<string>
#include<iostream>
using namespace std;

int main()
{
    try
    {
        string e="Divide by zero error";
        int a,b;
        cout<<"Enter first no.: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        if (a<0)
        throw a;
        if(b==0)
        throw e;
    }
    catch (int a)
    {
        cout<<"First number Negative: "<<a<<endl;
    }
    catch(string e)
    {
        cout<<e<<endl;
    }
    return 0;
}