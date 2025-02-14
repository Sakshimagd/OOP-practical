#include<iostream>
using namespace std;
class outer{
	private:
		int a=10;
	public:
		void getOuter(){
			cout<<"outer class variable"<<a<<endl;
		}
	class inner{
			private:
			int b=20;
		public:
			void getInner(){
				cout<<"Inner class variable"<<b<<endl;
			}
			void getFromOuter(outer &obj){
				cout<<"Outer class variavle"<<obj.a<<endl;
			}
	};
	
};
int main(){
	outer o1;
	outer::inner i1;
	o1.getOuter();
	i1.getInner();
	i1.getFromOuter(o1);
	
	return 0;
}
