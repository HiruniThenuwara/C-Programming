#include<stdio.h>
void area_of_rectangle(int height,int width){
	int area=height*width;
	printf("Area of rectangle :%d\n",area);
}
	int main(){
		int y,z;
		printf("Enter the height of rectangle :");
		scanf("%d",&y);
		printf("Enter the width of rectangle :");
		scanf("%d",&z);
		area_of_rectangle(y,z);
	}