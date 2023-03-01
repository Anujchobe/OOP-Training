#include<iostream>
using namespace std;

class number
{
    int x,y,z;
    public:
    void get();
    int min();
    int max();
    number()
    {
        cout<<"Default constructor"<<endl;
    }
    number(int a,int b)
    {
            x=a;
            y=b;
    }
    number(int a,int b,int c)
    {
        cout<<"Constructor with 3 para"<<endl;
    }
};
class copyconstructor
{
    int no1,no2;
    public:
    void show();
    copyconstructor(){}
    copyconstructor(int x,int y)
    {
        no1=x;
        no2=y;
    }
    copyconstructor(copyconstructor &obj)
    {
        no1=obj.no1;
        no2=obj.no2;
    }
};

void copyconstructor::show()
{
    cout<<"N01: "<<no1<<endl;
    cout<<"no2"<<no2<<endl;
}

void number::get()
    {
        cout<<x<<endl;
        cout<<y<<endl;
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
    number n2(a,b);
    number n3();
    n2.get();
    n2.min();
    n2.max();
    copyconstructor o1(3,5);
    copyconstructor o2(o1);
    o2.show();
    return 0;
}