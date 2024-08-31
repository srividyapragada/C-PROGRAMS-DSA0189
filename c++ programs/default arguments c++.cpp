#include<iostream>
using namespace std;
	int addNumbers(int a,int b=15,int c=25,int d=30){
	return a+b+c+d;
	}
	int main(){
		cout<<" Result when calling addNumbers(15,25,30)"<<addNumbers(15,25,30);
		return 0;
	}
