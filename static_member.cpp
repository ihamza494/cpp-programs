#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
		void set(void){
			cout<<"enter id:"<<endl;
			cin>>id;
		}
		void get(void){
			cout<<id;
		}
};


int main()
{
	Employee hamza;
	hamza.set();
	hamza.get();
	
	Employee Ali;
	Ali.set();
	Ali.get();
	
}
