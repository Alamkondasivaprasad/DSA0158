#include<iostream>
using namespace std;
void findminmax(const int arr[],int size,int &min,int &max){
	min=arr[0];
	max=arr[0];
	for(int i=1;i<size;++i){
		if(arr[i]<min) min=arr[i];
		if(arr[i]>max) max=arr[i];
	}
}
int main(){
	int arr[]={2,6,4,9,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int min,max;
	findminmax(arr,size,min,max);
	cout<<"minimum element:"<<min<<endl;
	cout<<"maximum element:"<<max<<endl;
	return 0;
}
