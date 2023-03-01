#include<iostream>
using namespace std;

class employee
{
    char name[25];
    int sal,empnumber;
    static int ctr;
    public:
    int getDetails();
    int showDetails();
};
int employee::ctr;
int employee::getDetails()
{
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter salary: ";
    cin>>sal;
    empnumber= ++ctr;    
    return 0;
}
int employee::showDetails()
{
    cout<<"Employee name: \n";
    cout<<name;
    cout<<"Employee salary: \n";
    cout<<sal;
    cout<<"Employee number: \n"<<empnumber;    
    return 0;
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