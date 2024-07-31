#include<iostream>
#include<algorithm>
using namespace std;
void reversearr(int arr,int size){
	reverse(arr,arr+size);
}
int main(){
	int arr[]={2,4,5,7,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int reversearr(int arr,int size);
	cout<<"reverse arr:";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
