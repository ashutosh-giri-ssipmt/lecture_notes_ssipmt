#include<iostream>

using namespace std ;


int main(){
	
	float ticket_amount = 1050 ;
	
	string name ;
	int age ;
	
	string src_station ;
	
	string destination_station ;
	
	string doj ;
	
	cout << "Enter Your name " << endl ;
	cin >> name ;
	
	cout << "Enter your age " << endl ;
	cin >> age ;
	
	if(age >  60){
		
		// special feature 
		ticket_amount = ticket_amount - ( 0.4*ticket_amount ) ;
		
	}
	
	cout << "Enter you Date of journey " << endl ;
	cin >> doj ;
	
	cout << "Enter source station " << endl ;
	cin >> src_station ;
	
	cout << "Enter your Destination station " << endl ;
	cin >> destination_station ;
	
	cout << "================================== Ticket Details ================================" << endl ;
	cout << name  << " " << age << endl ;
	cout <<   "Amount " << ticket_amount << endl ;
	cout << "Date of journey " << doj << endl ;
	cout << src_station << " to " << destination_station << endl ;
	
	return 0 ;
	
	
	
	
	return 0 ;
}
