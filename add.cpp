#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
int main()
{
    cout<<"Enter 2 numbers: ";
    int a,b;
    cin>>a>>b;
    int c=add(a,b);
    cout<<"Addition is: "<<c;
    return 0;
}
