#include<iostream>
#include<string>
using namespace std;

class employee
{
    char name[25];
    int sal,empnumber;
    static int ctr;
    static string cmpname;
    public:
    int getDetails();
    int showDetails();
    static int getCount();
};
int employee::ctr;
string employee::cmpname ="Met";
int employee::getDetails()
{
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter salary: ";
    cin>>sal;
    empnumber=getCount();
    return 0;
}
int employee::showDetails()
{
    cout<<"Company name: \n";
    cout<<cmpname;
    cout<<"Employee name: \n";
    cout<<name;
    cout<<"Employee salary: \n";
    cout<<sal;
    cout<<"Employee number: \n"<<empnumber;    
    return 0;
}
int employee::getCount()
{
    ctr=ctr+1;
    return ctr;
}
int main()
{
    employee e1,e2;
    e1.getDetails();
    e2.getDetails();
    e1.showDetails();
    e2.showDetails();
    return 0;
}