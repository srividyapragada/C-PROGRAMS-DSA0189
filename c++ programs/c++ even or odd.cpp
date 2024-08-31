#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout<<"enter a number:";
	cin>>number;
	
	if(number%2==0){
		cout<<number<<"is a even";
	}
	else{
		cout<<number<<"is a odd";
	}
	return 0;
}
