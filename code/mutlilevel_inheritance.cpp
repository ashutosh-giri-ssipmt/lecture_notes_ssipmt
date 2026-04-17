#include<iostream>
using namespace std ;

class Human{
	public:
		string name ;
		int age ;
		string gender ;
		
		void setHumanDetails(string name , int age){
			this -> name = name ;
			this -> age = age ;
		}
		
		void displayHuman(){
			
			cout << "Name : " << this -> name 
			<< "\nAge : " << this -> age << endl ;
			
		}
	
	
};

class Student : public Human {
	public :
		int rollNo ;
	
		void setRollNo(int rollNo){
			this -> rollNo = rollNo ;
		}
		
		void displayRollNo(){
			cout << "Roll No " << this -> rollNo << endl ;
		}
	
	
};

class EngineeringStudent : public Student{
	public :
		string branch ;
		
	void setBranch(string branch){
		this -> branch = branch ;
	}	
	void displayBranch(){
		
		cout << "Branch " << this -> branch ;
		
	}
};



int main(){
	EngineeringStudent* Ayush  = new EngineeringStudent ;
	Ayush->setHumanDetails("Ayush" , 21) ;
	Ayush->setRollNo(3007) ;
	Ayush->setBranch("CSE") ;
	Ayush->displayHuman() ;
	Ayush->displayRollNo() ;
	Ayush->displayBranch() ;
	
	return 0 ;
}
