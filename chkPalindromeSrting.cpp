#include <iostream>

using namespace std;

void chkStringPalindrome(string s){
	int h=s.length() -1;
	int l=0;
	int flag=0;
	while(h>l){
		if(s[l]!=s[h]){
			flag=1;
		}
		l=l+1;
		h=h-1;		
	}
	if(flag==1){
		cout<<"Not Palindrome";
	}
	else{
		cout<<"Palindrome";
	}	
}

int main(){
	string name;
	cin>>name;
	chkStringPalindrome(name);
}
