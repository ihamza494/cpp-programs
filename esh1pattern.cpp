#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,l,u,k;
	l=n;
	u=n;
	for(int i=1;i<=n;i++){
		k=i;
		for(j=1;j<= (2*n -1); j++){
			if(j>=l && j<=u){
				if(j<=n){
				cout<<k;
				k--;
				if(j==n){
					k++ ;
				}
			}else{
				++k;
				cout<<k;
			}
			}
			else{
				cout<<" ";
			}
		}
		u++ ; l--;
		cout<<endl;
	}
}
