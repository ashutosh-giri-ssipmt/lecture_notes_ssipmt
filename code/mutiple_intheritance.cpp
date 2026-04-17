#include<iostream>
using namespace std ;


class AcedemicDetails{
	
	public:
		float percentage  ;
		int semesster ;
		char grade ;
		int rollNo ;
	
	void setAcedemicDetails(float percentage , int semesster , char grade , int rollNo){
		this->percentage = percentage ;
		this -> semesster = semesster ;
		this -> grade = grade ;
		this -> rollNo = rollNo ;
	}
	void displayAcedemicDetails(){
		
		cout << "\npercentage : " << this -> percentage 
		<< "\nSemesster : " << this -> semesster 
		<< "\nGrade : " << this -> grade 
		<< "\nRollNo : " << this -> rollNo << endl ;
		
	}
};

class SportsDetails{
	
	public :
		string game ;
		string competition ;
		string team ;
	
	void setSportDetails(string game , string competition , string team){
			this -> game = game ;
			this -> competition = competition ;
			this -> team = team ;
	}
	void displaySportsDetails(){
		cout << "Game : " << this -> game 
		<< "\nCompetiton : " << this -> competition 
		<< "\nTeam : " << this -> team ;
	}
	
};


class StudentDetails : public AcedemicDetails , public SportsDetails{
	public:
	string name ;
	int age ;
	
	void setStudentDetail(string name , int age ){
		this -> name = name ;
		this -> age = age ;
	}	
	
	void showDetails(){
		cout << "Name : " << this -> name ;
		cout << "\nAge : " << this -> age ;
		AcedemicDetails :: displayAcedemicDetails() ;
		SportsDetails :: displaySportsDetails() ;
	}
};

int main(){
	StudentDetails * Aditi = new StudentDetails() ;
	Aditi -> setAcedemicDetails(90.26,6,'A',14) ;
	Aditi -> setSportDetails("Badminton", "school" , "Blue") ;
	Aditi -> setStudentDetail("Aditi" , 21) ;
	Aditi -> showDetails() ;

return 0 ;
}


