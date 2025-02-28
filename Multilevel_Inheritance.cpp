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
class Animal1:public Dog{
	public:
		void sleep(){
			cout<<"I do sleep"<<endl;
		}
};

int main(){
 
    Animal1 a1;
    a1.eat();
    a1.bark();
    a1.sleep();
	
	return 0;
}
