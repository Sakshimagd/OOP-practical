#include<iostream>
using namespace std;
class StudentInfo{
	public:
		string studentName;
		int rollNo;
		int percentage;
		void getStudentInfo(){
			cout<<"Student name:"<<studentName<<endl<<"roll No:"<<rollNo<<endl<<"percentage:"<<percentage<<endl;
		}
		char setStudentInfo(string N,int R,int P){
			studentName=N;
			rollNo=R;
			percentage=P;
			return 0;
		}		
};
int main()
{
	StudentInfo s1;
	s1.setStudentInfo("Apurva",65,85);
	s1.getStudentInfo();
	return 0;
}
