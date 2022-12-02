#include<stdio.h>
int main(){
	int number;
	for(number=1;number<=100;number++){
		if(number%3==0&&number%4==0&&number%5==0){
			printf("%d can be devided by 3,4 and 5\n",number);
		}
	}
}