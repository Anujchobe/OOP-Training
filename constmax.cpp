#include<iostream>
using namespace std;

class number
{
    int x,y;
    public:
    void get();
    int min();
    int max();
    number()
    {
        x=10,y=20;
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
    number n1;
    n1.get();
    n1.min();
    n1.max();
    return 0;
}