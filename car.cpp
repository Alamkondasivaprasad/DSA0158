#include<iostream>
using namespace std;
class car{
private:
	string modal;
	int year;
public:
	car(string mod,int yr):modal(mod),year(yr){
		cout<<"the modal of car:"<< modal<< " , year " << year <<endl;
	}
	~car(){
		cout<<"the modal of car:"<< modal<< " , year " << year <<"is destroied"<<endl;
		
	}
	void display(){
		cout<<"the modal of car:"<< modal<< " , year " << year <<endl;
	}
	
};
int main(){
	car car("tata",2003);
	car.display();
	return 0;
}
