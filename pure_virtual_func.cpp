#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int g=10, a=-3;
	g+=a;
	cout<<g;
	
	return 0;
}

//if a base class(using VIRTUAL function) is created for the purpose of creation of derived class we call it as "Abstract base class"
//we create Pure virtual function when we MUST required to create/define that function in derived class.  //virtual void display() =0 ; (pure virtual function)

//pure virtual function used to create Abstract base class (function must need to be override in derived classes)
//abstract base class ko hm objects ki creation k liye use nahin kr skty
//it is designed to inherit more classes
//Abst Base class must be having one pure virtual func  
