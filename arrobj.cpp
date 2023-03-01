#include<iostream>
using namespace std;

class number
{
    int x;
    public:
    void getData();
    void showData()
    {
        cout<<"Hello World";
    }
};
int main()
{
    number obj[5];
    for (int i=0;i<=5;i++)
    obj[i].showData();
    return 0;
}