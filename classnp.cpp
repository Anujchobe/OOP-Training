#include<iostream>
using namespace std;

class newspaper
{
    public:
    char lang[10];
    int pages,price;
    char scope[10];
    char publication[10];
    int getDetails();
    int showDetails();
};
int newspaper::getDetails()
{
    cout<<"Enter language: ";
    cin>>lang;
    cout<<"Enter pages: ";
    cin>>pages;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter scope: ";
    cin>>scope;
    cout<<"Enter publication: ";
    cin>>publication;
    return 0;
}
int newspaper::showDetails()
{
    cout<<"Language is: "<<lang<<endl;
    cout<<"Number of pages: "<<pages<<endl;
    cout<<"Price is: "<<price<<endl;
    cout<<"Scope is: "<<scope<<endl;
    cout<<"publication is: "<<publication<<endl;
    return 0;
}

int main()
{
    newspaper toi,sakal;
    toi.getDetails();   
    toi.showDetails();
    sakal.getDetails();
    sakal.showDetails();
    return 0;
}