#include<iostream>
using namespace std ;

class Animal{
	public:
		// data members 
		string name ; // 8 byte
		string breed ; // 8 byte --> 16 byte
		
		
		// member function
		Animal(string name , string breed ){
//			cout << "The animal class object has been created " << endl ;
			this -> name = name ;
			this -> breed = breed ;
		}
//		
//		void setValues(string name ,  string breed){
//			this -> name  = name ;
//			this -> breed = breed ;
//		}
		
		void getValue(){
			cout << "The name is " << this -> name ;
			cout << "\nThe breed is " << this-> breed << endl;
		}
		
		
};


int main(){
	
//	class Animal Dog ;
//	Dog.name = "Zippi" ;
//	Dog.breed = "Pavelian" ;
//	Dog.setValues("Zippi" , "Pavelian") ;
//
//	
//	class Animal Cow ;
	
//	Cow.name = "vrinda" ;
//	Cow.breed = "India" ;
//	
//	Cow.setValues("Vrinda" , "Indian") ;
//	
//	Dog.getValue();
//	Cow.getValue();
//	
//	 ===========================================

//	cout << Dog.name << " " << Dog.breed << endl ;
//	
//	cout << Cow.name << " " << Cow.breed ;
	
//	cout << "The size of Animal Class is " << sizeof(Cow) ;


//	Animal* Dog = new Animal() ;
//	Dog -> setValues("Zippe","pavelian") ;
//	Dog -> getValue() ;
	
//	Animal* Cow = new Animal() ;
//	Cow -> setValues("Vrinda" , "India") ;
//	Cow -> getValue();


	Animal * Dog = new Animal("Zippi", "pavellian") ;
	Animal * Cow = new Animal("Vrinda" , "India") ;
	
	Dog -> getValue() ;
	Cow -> getValue() ;
	
	return 0 ;
}
