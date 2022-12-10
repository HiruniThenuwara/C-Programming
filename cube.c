#include<stdio.h>
int main(){
	int num;
	int count;
	int cube;
	printf("Enter the number\n");
	scanf("%d",& num);
	for(count=1;count<=num;count++){
		cube=count*count*count;
		printf("%d Cube is :%d\n",count,cube);
	}
	return 0;
}