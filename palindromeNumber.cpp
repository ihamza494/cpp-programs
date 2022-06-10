#include <iostream>

using namespace std;
void chkPalindrome(int n){
	int orig, revNumber =0;
	orig =n;
	while(n !=0){
		revNumber=(revNumber*10) + (n%10);
		n=n/10;
	}
	if(orig == revNumber){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not Palindrome"<<endl;
	}	
}
int main(){
	int num;
	cin>>num;
	chkPalindrome(num);
	
}
