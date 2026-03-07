#include<iostream>
using namespace std ;


int main(){
	float product_price = 0.0 ;
	
	cout << "Enter the product price " << endl ;
	cin >> product_price ;
	
	if(product_price <= 1000){
		cout << " budget Friendly " << endl ;
	}
	else if(product_price > 1000 && product_price <= 5000 ){
		cout << " Moderate " << endl ;
	}
	else if(product_price > 5000 && product_price <= 100000){
		cout << "Expensive " << endl ;
	}
	else{
		
		cout << "Extremely Expensive" << endl ;
		
	}
	
	
	
	return 0 ;
}
