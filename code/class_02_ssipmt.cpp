#include<iostream>
using namespace std ;

class Animal{
	
	public:
		string name ;
		string breed ;
		string sound ;
		
		Animal(){
			cout << "The Animal object has been created" << endl ;
		}
		
		Animal(string name , string breed ){
			this -> name = name ;
			this -> breed = breed ;
			
		}
		
		Animal(string name , string breed , string sound) : Animal(name ,breed){
			this -> sound = sound ;
			
		}
		
		void showDetail(){
			cout << this -> name << " " << this -> breed << " " << this -> sound << endl ;
		}
	
	
};


int main(){
	
	Animal* Dog = new Animal("Zippi","Pavelian","Bark") ;
	
	Dog->showDetail();
	
	
	
	return 0 ;
}
