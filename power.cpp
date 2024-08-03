#include<iostream>
#include<cmath>
using namespace std;
int power(int base,int exp){
	return pow(base,exp);
}
double power(double base,double exp){
	return pow(base,exp);
}
int main(){
	int intbase=2,intexp=3;
	double doublebase=2.0,doubleexp=3.0;
	
	cout<<"power of integer :"<<power(intbase,intexp)<<endl;
	cout<<"power of double :"<<power(doublebase,doubleexp)<<endl;
	return 0;
}
