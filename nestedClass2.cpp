#include<iostream>
using namespace std;
class Bank{
	private:
		string accountHolder;
	    int accountNumber;
	    string accountType;
	    int balance;   
	public:
		void getInfo(){
			cout<<"Account Holder Name:"<<accountHolder<<endl;
			cout<<"Account Number"<<accountNumber<<endl;
			cout<<"Account Type:"<<accountType<<endl;
			cout<<"Available Balance:"<<balance<<endl;
		}
		void setInfo(string holder,int number,string type,int bal){
		 accountHolder=holder;
		 accountNumber=number;
		 accountType=type;
		 balance=bal;	
		}
    class Transactions{
       private:
       	 double amount;
       public:
       	 void deposite(double amt,Bank &obj){
       	 	amount=amt;
       	 	obj.balance+=amount;
       	    cout<<"Deposite Amount:"<<amount<<endl<<"Final Balance:"<<obj.balance<<endl;
			}
       	
        void Withdraw(double amt2,Bank &obj){
            obj.balance-=amt2;
       	    cout<<"withdraw Amount:"<<amt2<<endl<<"Final Balance:"<<obj.balance<<endl;	
		}
     	
	};
		
};
int main(){
	Bank b1;
	Bank::Transactions t1;
	b1.setInfo("sakshi",213456789,"saving",1000);
	b1.getInfo();
	
	t1.deposite(5000,b1);
	t1.Withdraw(2000,b1);
	return 0;
}

