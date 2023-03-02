#include<iostream>
using namespace std;
class baseclass
{
    int x;
    int y;
    public:
        baseclass(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void show()
        {
            cout<<"\n X : "<<x;
            cout<<"\n Y : "<<y;
        }
};

int main()
{
    baseclass obj(5,4);    
    obj.show();
    return 0;
}