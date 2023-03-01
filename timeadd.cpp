#include<iostream>
using namespace std;

class time
{
    int hh,mm,ss;
    public:
    int getTime();
    int setTime();
    int addTime(time ,time );

};

int time::getTime()
{
    cout<<"Enter hours";
    cin>>hh;
    cout<<"Enter minutes";
    cin>>mm;
    cout<<"Enter seconds";
    cin>>ss;
}

int time::setTime()
{
    cout<<"Time is: "<<hh<<":"<<mm<<":"<<ss;
}

int time::addTime(time t1,time t2)
{       
    int s,s1=0,m,m1=0,h;
    s=(t1.ss+t2.ss);
    if (s>=60)
    {
        s1=s/60;
        s=s%60;                       
    }

    m=t1.mm+t2.mm+s1;
    if(m>=60)
    {
        m1=m/60;   
        m=m%60;            
    }
    h=t1.hh+t2.hh+m1;

    hh=h;
    mm=m;
    ss=s;
    return 0; 
}
int main()
{
    time t1,t2,t3;
    cout<<"Enter first time"<<endl;
    t1.getTime();
    cout<<"Enter second time"<<endl;
    t2.getTime();
    t3.addTime(t1,t2);
    t3.setTime();
    return 0;
}
