#include<stdio.h>
int main(){
	int number;
	int input;
	int factor_count=0;
	int counter;
	
	for(counter=1;counter<=100;counter++){
		factor_count=0;
	for(number=1;number<=counter;number++){
		if(counter%number==0){
			factor_count=factor_count+1;
		}
	}
	if(factor_count==2){
		printf("%d is a primary number..\n",counter);
	}
	}
}