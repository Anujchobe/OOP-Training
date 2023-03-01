#include<iostream>
using namespace std;

class number
{
    int x,y,z;
    public:
    void get();
    int min();
    int max();
    number(int a,int b,int c)
    {
        x=a,y=b,z=c;
    }

};

void number::get()
    {
        cout<<x<<endl;
    }
int number::max()
{
    if (x>y)
    cout<<"X is greater than y "<<endl;
    else if(y>x)
    cout<<"y is greater than x "<<endl;    
}
int number::min()
{
    if(x<y)
    cout<<"X is less than y "<<endl;
    else if(y<x)
    cout<<"y is less than x "<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"Enter c: "<<endl;
    cin>>c;
    number n1(a,b,c);
    n1.get();
    n1.min();
    n1.max();
    return 0;
}