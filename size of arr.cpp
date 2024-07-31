#include<iostream>
#include<algorithm>
using namespace std;
void reversearr(int arr[],int size){
	reverse(arr,arr+size);
}
int main(){
	int i;
	int arr[]={2,4,9,1,7,8};
	int size = sizeof(arr)/ sizeof(arr[0]);
	
	reversearr(arr,size);
	
	cout<<"reversed arr:";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	} 
	cout<<endl;
	return 0;
}
