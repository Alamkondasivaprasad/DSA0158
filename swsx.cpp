#include<iostream>
using namespace std;
bool isprime(int n){
	if(n<=1)return false;
	for(int i=2;i<=n/2;++i)
	   if(n % i == 0)
	return false;
		return true;
			
}
int main(){
	int n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	if(isprime(n)){
		cout<<"prime number"<<endl;
	}else{
		cout<<"not a prime"<<endl;
	}
	return 0;
}
