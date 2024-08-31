#include<iostream>
using namespace std;
int main(){
	int num,reversed=0,temp;
	cout<<"enter a number";
	cin>>num;
	temp=num;
	while(temp>0){
		reversed=reversed*10 + (temp%10);
		temp=temp/10;
	}
	if(num==reversed){
		cout<<"palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
	return 0;
}
