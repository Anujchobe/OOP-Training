#include<iostream>
using namespace std;

class student
{
    int roll;
    char name[10];
    public:
    void get()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>roll;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll<<endl;
    }
};
int main()
{
    student st[2];
    for(int i=0;i<=2;i++)
    {
        st[i].get();
    }   
    for(int i=0;i<=2;i++)
    {
        st[i].show();
    }
    return 0;
}