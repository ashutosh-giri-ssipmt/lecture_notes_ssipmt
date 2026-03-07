#include<iostream>

using namespace std ;

int main(){
	int user_input = 0 ;
	
	cout << "For withdraw press 1 \nFor Balance press 2 \nFor deposite press 3" << endl ;
	cin >> user_input ; // 2
	
	switch(user_input){ // 2
		
		case 1 : 
			cout << "Withdraw in process " << endl ;
			break ;
		case 2 :
			cout << "Balance in progress " << endl ;
//			break ;
		case 3 :
			cout << "Deposite in progress " << endl ;
//			break ;
		
		default :
			cout << "Please Enter a valid choice " << endl ;
		
	}
	
	
	
	return 0 ;
}
