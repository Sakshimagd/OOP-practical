#include<iostream>
using namespace std;
class B{
	int x=10;
	public:
    	virtual	void show(){
			cout<<x<<endl;
		}
};
class D:public B{
	int y=11;
	public:
		void show(){
		   cout<<y<<endl;	
		}
	
};
int main(){
    B *b1;
    D d1;
    b1=&d1;
	b1->show();
	
}

