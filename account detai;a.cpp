#include<iostream>
using namespace std;
class bankaccount{
private:
	string account;
	double balance;
public:
	bankaccount(string accnum,double bal):account(accnum),balance(bal){
		cout<<"bankaccount with account number"<<account<<"and balance"<<balance<<endl;
	}
	~bankaccount(){
		cout<<"bankaccount bank number"<<account<<"is closed."<<endl;
	}
	void display(){
		cout<<"banck account:"<<account<<",balance"<<balance<<endl;
	}
};
int main(){
	bankaccount account("19627457846791",100000.0);
	account.display();
	return 0;
}
