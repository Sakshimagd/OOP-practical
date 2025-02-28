#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"I do eat"<<endl;
		}
};
class Animal1{
	public:
		void sleep(){
			cout<<"I do sleep"<<endl;
		}
};
class Dog:public Animal,public Animal1{
	public:
		void bark(){
	    	cout<<"I do bark"<<endl;
		}
};

int main(){
	
	Dog d1;
	d1.eat();
	d1.bark();
	d1.sleep();
	
	return 0;
}
