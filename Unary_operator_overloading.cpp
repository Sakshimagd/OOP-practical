#include<iostream>
using namespace std;
class Number{
	private:
		int value;
	public:
		Number(int v=0):value(v){};
		Number operator-(){
			return Number(-value);
		};
		void show(){
			cout<<"Negative value of x is:"<<value<<endl;
		};
};
int main(){
	Number n1(10);
	Number n2=-n1;
	n2.show();
}
