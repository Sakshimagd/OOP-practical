#include<iostream>
using namespace std;
class Box{
	private:
		int rad;
		float area;
    public:
    	const float pi=3.14;
    	void getBoxInfo(){
    		cout<<area<<endl;
		}
		int setBoxInfo(int r){
			rad=r;
			return 0;
		}
		Box(int R){
		cout<<"constructor is called"<<endl;
		rad=R;
		area=pi*R*R;	
		}
};
int main(){
	Box b1(2);
	b1.getBoxInfo();
}
