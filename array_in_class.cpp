#include<iostream>
using namespace std;

class shop{
	int itemId[100];
	int itemPrice[100];
	int counter;
	
public:
	void initcounter(void){counter =0;
	}
	void setPrice(void);
	void displayPrice(void);
};

void shop :: setPrice(void){
	cout<<"Enter id of your item: "<<endl;
	cin>>itemId[counter];
	cout<<"Enter price of your item: "<<endl;
	cin>>itemPrice[counter];
	counter++ ;
}

void shop :: displayPrice(void){
	for(int i =0;i< counter;i++){
		cout<<"The price of an item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}

int main(){
	shop hamza;
	hamza.initcounter();
	hamza.setPrice();
	hamza.setPrice();
	hamza.setPrice();
	hamza.displayPrice();
	return 0;
}
