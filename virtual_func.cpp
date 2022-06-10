#include<iostream>
#include<cstring>
using namespace std;
class Hamza{
	protected:
		string title;
		float rating;
	public:
		Hamza(string s,float r){
			title=s;
			rating = r;
		}
		virtual void display(){
		}
		
};
class Hvideo : public Hamza{
	float vLen ;
	public:
		Hvideo(string s, float r, float l): Hamza(s, r){
			vLen =l;
		}
		void display(){
			cout<<"Name : "<<title<<endl;
			cout<<"RAting: "<<rating<<" out of 5."<<endl;
			cout<<"Video Length:  "<<vLen<<endl;
		}
};
class Htext : public Hamza{
	int tLen ;
	public:
		Htext(string s, float r, int wc): Hamza(s, r){
			tLen =wc;
		}
		void display(){
			cout<<"Name : "<<title<<endl;
			cout<<"RAting: "<<rating<<" out of 5."<<endl;
			cout<<"page Length:  "<<tLen<<endl;
		}
};
int main(){
	string title;
	float video_Length, rating;
	int word_count;
	title="Hamza do more";
	video_Length = 43.5;
	rating = 3.9;
	Hvideo obj1(title, rating, video_Length);
	word_count=240;
	Htext obj2(title, rating, word_count);  //iska apna display call hoga due to virtual keyword used in base class
	Hamza *info[2];
	info[0] = &obj1;
	info[1] = &obj2;
	info[0]->display();
	info[1]->display();   //both are  showing there on display function becaise virtual keyword used in base class if we remove 
						//the virtual keyword these lines wil run the display func from base class.
	return 0;
	
}




//Virtual Func
//Thay can not be static..
//They are accessed by object pointer.
//vir func can be a frnd of another class
//virtual func in base class can mught not be used
