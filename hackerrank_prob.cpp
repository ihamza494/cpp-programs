#include<iostream>

using namespace std;
int rotate_left(int a[]){
	cout<<a[3]<<endl;
}


int main(){
int n, d;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<d;i++){
	int temp=a[0];
	for(int j=0;j<n;j++){
		if(j==n-1){
			a[j]=temp;
		}
		else{
			a[j]=a[j+1];
			
	}
}
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
}
