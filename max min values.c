#include<stdio.h>
int main(){
	int values[5];
	int index;
	for(index=0;index<5;index++){
		printf("Enter a number :");
		scanf("%d",& values[index]);
	}
	int max=values[0];
	int min=values[0];
	for(index=0;index<5;index++){
		if(max<values[index]){
			max=values[index];
		}
		if(min>values[index]){
			min=values[index];
		}
	}
		printf("Maximum value :%d\n",max);
		printf("Minimum value :%d\n",min);
	
	return 0;
}