#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class Book_bus{
	string from_city;
	string to_city;
	int no_of_tickets;
	static int max_seat;
    static int booked_seats;
	
	   public:
	       Book_bus(string s="Source",string d="Destinstion",int t=1){
	       	if(t>(max_seat-booked_seats)){
	       		throw runtime_error("There are not as many seats available");
			   }
			from_city=s;
		    to_city=d;
		    no_of_tickets=t;
		    booked_seats += t;
		    }
		   void showbooking(){
		   	cout<<"--------------------------"<<endl;
		   	cout<<"Source="<<from_city<<endl;
		   	cout<<"Destination="<<to_city<<endl;
		   	cout<<"No_of_tickets"<<no_of_tickets<<endl;
		   	cout<<"Availablr_tickets"<<(max_seat-booked_seats)<<endl;
		   }
	       
	   	    int Available_seats(){
	   	   	return max_seat-booked_seats;
			  }
};

int Book_bus::max_seat=30;
int Book_bus::booked_seats=0;
int main(){
	try{
		Book_bus b1("mumbai","pune",4);
		b1.showbooking();
		
		Book_bus b2("mumbai","pune",4);
		b2.showbooking();
		
		Book_bus b3("mumbai","pune",25);
		b3.showbooking();
		
	}
	catch (runtime_error &e){
		cout<<"Exception"<<e.what()<<endl;
//		cout<<"Available seats:"<<Book_bus::Available_seats()<<endl;
	}
//	cout<<\n \t "HAPPY JOURNEY" <<endl;
	return 0;
}

