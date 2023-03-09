
#include<stack>

#include<iostream>

#include<cstring>

using namespace std;

class VadlakshmiSrinivas{

	public:
		static int accNo;
		static int ifsc;
		int telephoneNo=02556547;
		string branchName="VadlakshmiSrinivas,dalal road", branchAdd="Road no.3,Dalal Steet, Mumbai" ;
		
	public:
	
		int setAccNo(){
		 accNo=accNo+1;			
		}
		int setTeleNo(){
			cout<<"\nEnter Telephone Number: ";
			cin>>telephoneNo;			
		}	
		int setBranchName(){
			cout<<"\nEnter Branch Name: ";
			cin>>branchName;			
		}
		int setBranchAdd(){
			cout<<"\nEnter Branch Address: ";
			cin>>branchAdd;			
		}
		
		int showIfsc(){
			
			cout<<"\nIFSC code: "<<ifsc;		
		}
		int showAccNo(){
			
			cout<<"\nYour Account Number':"<<accNo;	
		}
		int showTeleNo(){
			
			cout<<"\nYour Account Number':"<<telephoneNo;
		}
		int showBranchName(){
			
			cout<<"\nYour Branch Name':"<<branchName;
		}
		int showBranchAdd(){
			
			cout<<"\nYour Branch Address':"<<branchAdd;	
		}
};
int VadlakshmiSrinivas::accNo=000000001;
int VadlakshmiSrinivas::ifsc=1111;

class individual
{
    public:
        string name,emailId,address;
        int accNo,panId,mobileNo;
        int setName(),setemailId(),setAddress(),setAccno(),setPanid(),setmobileNo();
        int showName(),showemailId(),showAddress(),showAccno(),showPanid(),showmobileNo();
};
int individual::setName()
{
    cout<<"Enter your Name: ";
    cin>>name;
}
int individual::setemailId()
{
    cout<<"Enter your EmailId: ";
    cin>>emailId;
}
int individual::setAddress()
{
    cout<<"Enter your Address: ";
    cin>>address;
}


int individual::setPanid()
{
    cout<<"Enter your Pan Number: ";
    cin>>panId;
}
int individual::showName()
{
    cout<<"Name: "<<name<<endl;
}
int individual::showemailId()
{
    cout<<"Email ID: "<<emailId<<endl;
}
int individual::showmobileNo()
{
    cout<<"Customer ID: "<<mobileNo<<endl;
}
int individual::showPanid()
{
    cout<<"PAN NO: "<<panId<<endl;
}
int individual::showAddress()
{
    cout<<"Address: "<<address<<endl;
}int individual::showAccno()
{
    cout<<"Account no: "<<accNo<<endl;
};

class Account:public VadlakshmiSrinivas, public individual
{
	public:
		int balance,deposit,withdraw,transaction;
		int checkBalance()
		{
			cout<<"Your balance is: "<<balance<<endl;
			
		}
		int setDeposit()
		{
			cout<<"Enter amount you want to deposit: ";
			cin>>deposit;
			cout<<"Amount deposited: "<<deposit;
			balance+=deposit;
			statement();
		}
		int setWithdraw()
		{
			cout<<"Enter amount you want to withdraw ";
			cin>>withdraw;
			if(balance<withdraw)
			cout<<"Insufficient Balance";
			else{
			
			cout<<"Amount withdrawn: "<<withdraw;
			balance-=withdraw;
			statement();
		}
		}		
 int statement(){
	
	stack <int> transaction;

	transaction.push(withdraw);

	transaction.push(deposit);
	
}
//int showStatement(){
//while(!transaction.empty()){
//		cout<<transaction.top()<<endl;
//		transaction.pop();
//}
	
//}
};

int main()
{
	Account create;
    int ch1,ch2,ch3=0,name;
    cout<<"..................WELCOME TO VADLAKSHMI SRINIVASAM!!!!!.............."<<endl;
    cout<<".........OUR SLOGAN........"<<endl;
	cout<<"For Bank Employee enter 1: "<<endl;
	cout<<"For customer enter 2: "<<endl;
	cin>>ch1;
    switch(ch1)
    {		
        case 1:
        	while(ch1!=2){
			
		cout<<"Enter 1 to Create Account"<<endl;
		cout<<"Enter 2 to EXIT"<<endl;
		cin>>ch2;
		switch(ch2)
		{
		case 1:
		create.setName();
		create.setemailId();
		create.setAddress();
		create.setPanid();
		create.setAccNo();
		break;
//		case 2:
//		cout<<"Enter name";
//		cin>>name;
//		delete bhavesh;
//		cout<<"Account deleted successfully!!";
//		break;
	}
		case 2:
		
    	while(ch3!=5)
    	{
		cout<<"Enter 1 to Display Customer Information"<<endl;
    	cout<<"Enter 2 to Display Bank Balance"<<endl;
    	cout<<"Enter 3 to Display Bank Statement"<<endl;
    	cout<<"Enter 4 to Perform Transactions "<<endl;
    	cout<<"Enter 5 to Exit "<<endl;
		cout<<"Enter Choice Here: "<<endl;
    	cin>>ch3;
		switch(ch3)	
		{
			
			
			case 1:
				create.showName();
				create.showAccNo();
				create.showIfsc();
				create.showBranchName();
				create.showBranchAdd();
				create.showemailId();
				create.showPanid();
				create.showAddress();
				break;
			case 2:
				create.checkBalance();
			    break;
			case 3:
				create.statement();
				break;
			case 4:
				
				create.setDeposit();
				create.checkBalance();
				create.setWithdraw();
				create.checkBalance();
				break;
			case 5:
				cout<<"Thank You!!! VADLAKSHMI SRINIVAS #MYBANKMYRULES";
				break;
			default:
				cout<<"Invalid!!";
		}
		
}
}

    }
}

