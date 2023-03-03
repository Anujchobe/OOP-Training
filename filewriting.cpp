#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("test.txt");
    cout<<"\n Writing in file";
    cout<<"\n Enter name";
    cin.getline(data,10);
    outfile<<data<<endl;
    cout<<"Enter ph no.";
    cin.getline(data,10);
    outfile<<data;
    return 0;
}