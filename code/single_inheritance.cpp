#include<iostream>

using namespace std ;


class Employee{
	
	public:
		string emp_id ;
		string name ;
		double salary ;
	
	void setEmployeeDetails(string emp_id , string name , double salary){
		
		this -> emp_id = emp_id ;
		this -> name = name ;
		this -> salary = salary ;
		
	}
	
	void displayDetails(){
		cout << "The emp id is " << this -> emp_id 
		<< "\nThe name is " << this -> name 
		<< "\n The salary is " << this -> salary ;
	}
	
	
};

// syntax 
// class DerivedClassName : accesstype BaseClassName

// inheritanc in public mode
class Programmer : public Employee{
	public :
		string prLanguage ;
		
	void setProgrammingLanguage(string language){
		this->prLanguage = language ;
	}
	void showDetail(){
		this->displayDetails() ;
		
		cout << "\nThe programing Language is " << this->prLanguage ;
	}
	
};


// inheritance in the priivate mode

//class Programmer : private Employee{
//	public :
//		string prLanguage ;
//		
//	void setProgrammingLanguage(string language){
//		this->prLanguage = language ;
//	}
//	void showDetail(){
//		this->displayDetails() ;
//		
//		cout << "\nThe programing Language is " << this->prLanguage ;
//	}
//	
//};


// inheritance in the protected Mode

//class Programmer : protected Employee{
//	public :
//		string prLanguage ;
//		
//	void setProgrammingLanguage(string language){
//		this->prLanguage = language ;
//	}
//	void showDetail(){
//		this->displayDetails() ;
//		
//		cout << "\nThe programing Language is " << this->prLanguage ;
//	}
//	
//};

int main(){
	
	Programmer* javaScriptPr = new Programmer() ;
	javaScriptPr -> setEmployeeDetails("asdtfyugiojkpszdxfcghvbjnk","Smriti Sihna" , 1000000 ) ;
	javaScriptPr -> setProgrammingLanguage("javascript") ;
	javaScriptPr->showDetail();
	
	
	return 0 ;
}
