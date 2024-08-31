#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[]="good morning:";
	cout<<"original string:\n"<<arr;
	cout<<"string in upper case:\n";
	for(int i=0;i<strlen(arr);i++)
	   putchar(toupper(arr[i]));
	   {
	   	cout<<"string in lowercase\n";
	   	for(int i=0;i<strlen(arr);i++)
	   putchar(tolower(arr[i]));
	   
	   return 0;
	   	
	   }
	
	
}
