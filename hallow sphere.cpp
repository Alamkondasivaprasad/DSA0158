#include<stdio.h>
int main(){
	int N,i,j;
	printf("enter the number of rows:");
	scanf("%d",&N);
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			if(i==1 || i==N || j==1 || j==N){
			printf("*");}
			else{
			printf(" ");
		}
		}
		printf("\n");
	}
	return 0;
}
