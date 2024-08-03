#include<iostream>
#include<cmath>
using namespace std;
int absolute(int n){
	return abs(n);
}
float absolute(float n){
	return fabs(n);
}
int main(){
	int intnum = -5;
	float floatnum = -5.5;
	
	cout<<"absolute integer"<<  intnum <<" is :"<<absolute(intnum)<<endl;
	cout<<"absolute float"<<  floatnum <<" is :"<<absolute(floatnum)<<endl;
	return 0;	
}
