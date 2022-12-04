#include<stdio.h>
int main(){
	int number;
	int counter;
	for(number=2;number<=8;number++){
	for(counter=1;counter<=10;counter++){
		int answer=number*counter;
		printf("%d X %d=%d\n",number,counter,answer);
	}
	printf("\n");
	}
}