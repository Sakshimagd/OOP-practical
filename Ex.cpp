#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"constructer of base"<<endl;
		}
        void fun(){
        	cout<<"Base fun"<<endl;
		}
		~Base(){
			cout<<"Destructer of base"<<endl;
		}
};
class Derived:public Base{
	public:
		Derived(){
			cout<<"constructer of derived"<<endl;
		}
		void fun1(){
        	cout<<"Derived fun"<<endl;
		}
		~Derived(){
			cout<<"Destructer of derived"<<endl;
		}
};
int main(){
	Base b;
	Derived d;
	b.fun();
	d.fun1();
	
	return 0;
}
