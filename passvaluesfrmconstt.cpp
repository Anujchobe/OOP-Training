#include<iostream>
using namespace std;

class base
{
    public:
        int x,y;
    base(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
};

class derived:public base
{
    int z;
    public:
    derived(int n1,int n2,int n3):base(n2,n3)
    {
        z=n1;
        cout<<"\nInside derived constructor";
    }
    void show()
    {
        cout<<"\nX: "<<x;
        cout<<"\nY: "<<y;
        cout<<"\nZ: "<<z;
    }
};

int main()
{
    derived obj(10,20,30);
    obj.show();
    return 0;
}