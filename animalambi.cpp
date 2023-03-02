// WARNING CHANGE NAME OF GET SET IN EACH FUNCTION


#include<iostream>
using namespace std;

class animal
{
    public:
    char name[20],type[10],habitat[10];
    int height,weight;    
    int get();
    int set();
};

class terristial: virtual public animal
{
    public:
    int speed,legs;
    int get();
    int set();
};

class aquaticanimals: virtual public animal
{
    public:
    char type[10],temp[10],color[10];
    int get();
    int set();
};

class amphibian:public aquaticanimals,public terristial
{
    public:

};

int terristial::set()
{
    cout<<"Enter speed: "<<endl;
    cin>>speed;
    cout<<"Enter no of legs: "<<endl;
    cin>>legs;
}
int terristial::get()
{
    cout<<"Speed is: "<<speed<<endl;
    cout<<"No. of legs are: "<<legs<<endl;
}
int aquaticanimals::set()
{
    cout<<"Enter type: ";
    cin>>type;
    cout<<"Enter water temperature: ";
    cin>>temp;
    cout<<"Enter color: ";
    cin>>color;
}

int animal::get()
{
    cout<<"Height is: "<<height<<endl;
    cout<<"Weight is: "<<weight<<endl;
    cout<<"Type is: "<<type<<endl;
    cout<<"Name is: "<<name<<endl;
    cout<<"Habitat is: "<<habitat<<endl;
}

int animal::set()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter type: ";
    cin>>type;
    cout<<"Enter habitat: ";
    cin>>habitat;
    cout<<"Enter height";
    cin>>height;
    cout<<"Enter weight: ";
    cin>>weight;
    return 0;
}

int main()
{    
    amphibian bhav;
    bhav.animal::set();
    bhav.terristial::set();
    bhav.aquaticanimals::set();
    bhav.animal::get();
    bhav.terristial::get();
    bhav.aquaticanimals::get();
    return 0;
}