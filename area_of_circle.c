#include<stdio.h>
void area_of_circle(int radious){
	int area=3.14*radious*radious;
	printf("Area of circle :%d\n",area);
}
	int main(){
		int x;
		printf("Enter the radious of circle :");
		scanf("%d",&x);
		area_of_circle(x);
	}