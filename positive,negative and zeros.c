#include<stdio.h>
int main(){
	int values[8];
	int index,numbers;
	int total=0;
	int positive_count=0;
	int negative_count=0;
	int zero_count=0;
	for(index=0;index<8;index++){
		printf("Enter a number :");
		scanf("%d",& numbers);
		values[index]=numbers;
		total=total+values[index];
	}
	for(index=0;index<8;index++){
		if(values[index]>0){
			positive_count=positive_count+1;
		}else if(values[index]<0){
			negative_count=negative_count+1;
		}else{
			zero_count=zero_count+1;
		}
	}
			printf("Total :%d\n",total);
			printf("Positive values :%d\n",positive_count);
			printf("Negative values :%d\n",negative_count);
			printf("Zero values :%d\n",zero_count);
			return 0;
}