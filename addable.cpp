#include<iostream>
using namespace std;
class add{
private:
	int value;
public:
	add(int v):value(v){}
	add operator+(const add& obj){
		return add(value+obj.value);
	}
	void display()const{
	cout<<"value:"<<value<<endl;
	}	
};
int main(){
	add obj1(6),obj2(7);
	add obj3=obj1+obj2;
	obj3.display();
	return 0;
}
