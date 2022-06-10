#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
 
struct student{
 	string roll_no="0";
 	int score=0;
 };
 
int main(){
 	student s[3];
//	 cout<<"Roll no:       PF Score"<<endl;	
	cout<<"1. record Enter \n 2. display \n 3. Exit"<<endl;
	 int choice;
	 int count=0;
	 cin>>choice ;
	 switch(choice){
	 	case 1:
	 		cout<<"\t\t\tEnter roll number: ";
	 		cin>> s[count].roll_no;
	 		cout<<"\t\t Enter Score: ";
	 		cin>>s[count].score;
	 	case 2:
	 		cout<<" Roll Number        Marks: " ;
	 		cout<< s[count].roll_no<<"       "<<s[count].score<<endl;
	 	case 3:
	 		break;
	 		
	 		
	 }
 }
