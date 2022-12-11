#include<stdio.h>
void addition(int no1,int no2){
	int total=no1+no2;
	printf("Total :%d\n",total);
}
	int main(){
		addition(45,67);
		addition(24,89);
		int x,y;
		printf("Enter number :");
		scanf("%d",&x);
		printf("Enter number :");
		scanf("%d",&y);
		addition(x,y);
		return 0;
	}