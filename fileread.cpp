#include<iostream>
#include<fstream>
using namespace std;

int main()
{   
    char data[100];
    ifstream infile;
    infile.open("test.txt");
    
    while(infile.eof()!=true)
    {
    cout<<data<<endl;
    infile>>data;
    }
    return 0;
}