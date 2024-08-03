#include<iostream>
#include<algorithm>
using namespace std;
void sortedarr(int arr[],int size){
	sort(arr,arr + size);
}
void sortedarr(double arr[],int size){
	sort(arr,arr + size);
}
int main(){
	int intarr[5]={2,4,3,6,5};
	double doublearr[5]={2.0,1.5,2.5,3.1,5.6};
	
	sortedarr(intarr,5);
	sortedarr(doublearr,5);
	
	cout<<"sorted integer:"<<endl;
	for(int i=0;i<5;++i){
		cout<<intarr[i]<<" ";
		cout<<endl;
	}
	cout<<"sorted double:"<<endl;
	for(int i=0;i<5;++i){
		cout<<doublearr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
