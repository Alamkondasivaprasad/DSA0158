#include<iostream>
using namespace std;
int main(){
	int intnum;
	float floatnum;
	cout<<"enter the num:";
	cin>>intnum;
	cout<<"enter the float:";
	cin>>floatnum;
	if(intnum !=0){
		float result= floatnum/intnum;
		cout<<"results of zero:"<<result<<endl;
	}else{
		cout<<"divisible by zero is not allowed"<<endl;
	}
	return 0;
}
