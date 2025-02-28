#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"I do eat"<<endl;
		}
};
class Dog:public Animal{
	public:
		void bark(){
	    	cout<<"I do bark"<<endl;
		}
};

int main(){
	
	Dog d1;
	d1.eat();
	d1.bark();
	
	
	return 0;
}
