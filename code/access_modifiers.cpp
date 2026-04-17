#include<iostream>
using namespace std ;

class Trip{
	protected :
		float budget ;
		string place ;
		int members ;
		string date ;
	
    public :
     	
	Trip(float budget , string place , int members , string date){
		this -> budget = budget ;
		this -> place = place ;
		this -> members = members ; 
		this -> date = date ;
	}
	
	void showTripDetails(){
		
		cout << "The trip budget is " << this->budget 
		<< "\nThe place is " << this -> place   
		<< "\nThe No of members are " << this -> members 
		<< "\nThe date is " << this->date ;
		
		
	}
	
};



int main(){
	
	Trip * BiharTrip = new Trip(4000.45,"siwan" , 4 , "25-06-2026") ;
	BiharTrip -> showTripDetails() ;

	
	
	return 0 ;
}
