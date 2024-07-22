#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	double average;
	cout<<"enter the first & second & third integers:";
	cin>>n1>>n2>>n3;
	average=(n1+n2+n3) / 3.0;
	cout<<"the average of:" << n1 << "," << n2 << ",and" << n3 << "is" << average << endl;
}
