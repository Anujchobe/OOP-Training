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

class elephant:public animal
{
    public:
    int tusklen,trunklen;
    int get();
    int set();
};

class aquaticanimals
{
    public:
    char type[10],temp[10],color[10];
    int get();
    int set();
};

int aquaticanimals::set()
{
    cout<<"Enter type: ";
    cin>>type;
    cout<<"Enter water temperature: ";
    cin>>temp;
    cout<<"Enter color: ";
    cin>>color;
}

int elephant::set()
{
    cout<<"Enter Tusk length: ";
    cin>>tusklen;
    cout<<"Enter Trunk length";
    cin>>trunklen;
    return 0;
}

int elephant::get()
{

    cout<<"Tusk length is: "<<tusklen<<endl;
    cout<<"Trunk length is :"<<trunklen<<endl;
    return 0;
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
    animal a1;
    elephant e1;
    aquaticanimals aq1;
    a1.set();
    e1.set();
    a1.get();
    e1.get();
    aq1.set();
    aq1.get();

    return 0;
}