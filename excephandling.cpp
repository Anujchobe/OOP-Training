#include<iostream>
using namespace std;

int main()
{
    try
    {
        int no;
        cout<<"Enter number"<<endl;
        cin>>no;
        if (no<5)
        throw no;
    }
    catch(int no)
    {
        cout<<"Exception raised! "<<endl;
        cout<<"Less than 5: "<<no<<endl;
    }
    return 0;
}