#include<iostream>
using namespace std;
class AreaOfCircle{
	private:
		const float pi=3.14;
		int rad;
		float area1;
	public:
		void getAreaOfCircle(){
			cout<<"Radius is:"<<rad<<endl<<"Area of circle is:"<<area1<<endl;
		}
		int setAreaOfCircle(int r){
			rad=r;
			area1=pi*r*r;
			return 0;
		}
};
class AreaOfRect{
	private:
		int len;
		int bred;
		int area2;
	public:	
		void getAreaOfRect(){
			cout<<"Lenght is:"<<len<<endl<<"Breadth is:"<<bred<<endl<<"Area of rectangle is:"<<area2<<endl;
		}
		int setAreaOfRect(int l,int b){
     		len=l;
			bred=b;
			area2=len*bred;
			return 0;			
		}
};
int main(){
	AreaOfCircle a1;
	AreaOfRect a2;
	a1.setAreaOfCircle(4);
	a1.getAreaOfCircle();
	a2.setAreaOfRect(12,5);
	a2.getAreaOfRect();
	return 0;
}
