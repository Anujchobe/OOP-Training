#include<iostream>
using namespace std;

class shape
{
    public:
    int x,y;
    void get(int no1,int no2)
    {
        x=no1;
        y=no2;
    }
    virtual void calculatearea()=0;
};

class triangle:public shape
{
    public:
    int area;
    void calculatearea()
    {
        area=0.5*x*y;
        cout<<"Area is: "<<area<<endl;
    }
};

class rectangle:public shape
{
    public:
    int area;
    void calculatearea()
    {
        area=x*y;
        cout<<"Area is: "<<area<<endl;
    }
};
int main()
{
    triangle t;
    t.get(4,5);
    t.calculatearea();
    rectangle r;
    r.get(4,5);
    r.calculatearea();
    return 0;
}