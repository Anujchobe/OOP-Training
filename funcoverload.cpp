#include<iostream>
using namespace std;

class poly
{
    public:
    int shownumber()
    {
        cout<<"\nInside number";
    }
    int shownumber(int n)
    {
        cout<<"\nInside one para";
    }
    int shownumber(int m, int o)
    {
        cout<<"\nInside 2 parameters";
    }
};
int main()
{
    poly obj;
    obj.shownumber();
    obj.shownumber(5);
    obj.shownumber(5,5);
    return 0;
}