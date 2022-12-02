#include<stdio.h>
int main(){
	int values[]={65,55,45,35,25};
	int index;
	for(index=0;index<5;index++){
		printf("%d element:%d\n",index,values[index]);
	}
	return 0;
}