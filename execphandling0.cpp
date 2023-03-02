#include<string>
#include<iostream>
using namespace std;

int checklessthan0(int a)
{
        try
    {
         if (a<0)
        throw a;
    }
    catch (int a)
    {
        cout<<"First number Negative: "<<a<<endl;
    }
}

int checknegative(int b)
{
    string e="Divide by zero error";
    try
    {
        if(b==0)
        throw b;         
    }
    catch(int b)
    {
        cout<<e<<endl;
    }
    
}
int main()
{
        
        int a,b;
        cout<<"Enter first no.: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;               
        checklessthan0(a);
        checknegative(b);
        
    return 0;
}