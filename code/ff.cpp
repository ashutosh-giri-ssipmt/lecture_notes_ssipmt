#include<iostream>
using namespace std ;



void getNameAndAge(){
		
	string name ;
	int age ;
	cout << "Enter Your name and age "<< endl ;
	cin >> name >> age ;
	cout << "The name is : " << name << " " << "age  is : " << age << endl ;	
}



int main(){

	// first 
	getNameAndAge() ;
	
	//second person
	getNameAndAge() ;
	
	//third person
	getNameAndAge() ;  
	
	// fourth person
	getNameAndAge() ;	
	
	
	return 0 ;
}
