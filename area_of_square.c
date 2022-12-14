#include<stdio.h>
void area_of_square(int length){
	int area=length*length;
	printf("Area of square :%d\n",area);
}
	int main(){
		int x;
		printf("Enter the length of square :");
		scanf("%d",&x);
		area_of_square(x);
	}