#include<iostream>
using namespace std;

class number
{
    int no1,no2;
    public:
    number(int a,int b)
    {
        no1=a;
        no2=b;        
    }
    number()
    {
        no1=0;
        no2=0;
    }
    void shownum()
    {
        cout<<"Sum of numbers is: "<<no1<<" "<<no2<<endl;
    }
    number operator + (number n)
    {
        number temp;
        temp.no1=n.no1+no1;
        temp .no2=n.no2+no2;
        return temp;
    }
};
int main()
{   number ans;
    number n1(10,20);
    number n2(20,30);
    ans=n1+n2;
    ans.shownum();
    return 0;
}