#include<iostream>
using namespace std;
class Account:public SBI,public individual
{
	int transaction; 
	public:
	int checkBal(){
	
	 int showCheckBal(){
	
		cout<<"YOUR ACCOUNT BALANCE IS : "<<balance<<endl;
	}
}

//withdraw
	int withdraw()
	{
		int setWithdraw()
		{
		cout<<"ENTER THE AMOUNT YOU WANT TO WITHDRAW: "<<endl;
		cin>>transaction;
	}
	
	int showWithdraw()
	
	{
		balance=balance-transaction;
		cout<<"YOUR AMMOUNT "<<transaction<<"AMMOUNT IS SUCCESSFULLY WITHDRAWN"<<endl;
		cout<<"YOUR REMAINING BALANCE IS: "<<balance<<endl;
		
	}
}

	int deposit()
	{
		int setDeposit()
		{
		cout<<"ENTER THE AMOUNT YOU WANT TO DEPOSIT: "<<endl;
		cin>>transaction;
	}
	
	int showDeposit()
	
	{
		balance=balance+transaction;
		cout<<"YOUR AMMOUNT "<<transaction<<"AMMOUNT IS SUCCESSFULLY DEPOSITED"<<endl;
		cout<<"YOUR REMAINING BALANCE IS: "<<balance<<endl;
		
	}
}
	};
	
class Sbi
{

};

int main()
{
    int ch;
    cout<<"Enter 1 to Display Customer Information"<<endl;
    cout<<"Enter 2 to Display Bank Balance"<<endl;
    cout<<"Enter 3 to Display Bank Statement"<<endl;
    cout<<"Enter 4 to Perform Transactions "<<endl;
    cout<<"Enter 5 to Exit "<<endl;
    cout<<"Enter Choice Here: "<<endl;
    cin>>ch;
    switch(ch)
    {
        case1:
        case2:
        case3:
        case4:
        case5:

    }
}