#include<iostream>
using namespace std ;

// with out return type without param
//void getAccessories(){
//	
//	string accessories ;
//	
//	cout << "Enter the accessory name " << endl ;
//	cin >> accessories ;//shoes
//		//shoes == clothes
//	if(accessories == "clothes"){
//		cout << "The discount is 40%" << endl ;
//	}
//			// shoes == shoes
//	else if(accessories == "shoes"){
//			cout << "The discount is 20%" << endl ;
//	}
//	else if(accessories == "cosmatics"){
//			cout << "The discount is 10%" << endl ;
//	}
//	else{
//		// default 
//			cout << "The discount is 5%" << endl ;
//	}
//	
//}


// without return type with param 

//void getAccessories(string accessories){
//	  //clothes == clothes
//	if(accessories == "clothes"){
//		cout << "The discount is 40%" << endl ;
//	}
//			// shoes == shoes
//	else if(accessories == "shoes"){
//			cout << "The discount is 20%" << endl ;
//	}
//	else if(accessories == "cosmatics"){
//			cout << "The discount is 10%" << endl ;
//	}
//	else{
//		// default 
//			cout << "The discount is 5%" << endl ;
//	}
//	
//}


// with return type without param

int getAccessories(){
	string accessories ;	
	cout << "Enter the accessory name " << endl ;
	cin >> accessories ;
		//cosmatics == clothes
	if(accessories == "clothes"){
		return 40 ;
	}
			// cosmatics == shoes 
	else if(accessories == "shoes"){
			return 20 ;
	}
			// cosmatics == cosmatics 
	else if(accessories == "cosmatics"){
			return 10 ;
	}
	else{
		// default 
			return 5 ;
	}
//	
}




int main(){
	//getAccessories() ; // called return back
//	string accessories ;
//	
//	cout << "Enter the accessory name " << endl ;
//	cin >> accessories ;
//	getAccessories(accessories) ;
//	int discount = getAccessories() ; // right to left
//	
//	cout << "The discount is " << discount << " % " << endl ;
//    
//	
	return 0 ;
}
