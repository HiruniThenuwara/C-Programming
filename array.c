#include<stdio.h>
int main (){
	int values[]={65,55,45,35,25};
	int index;
	int counter;
	int tot=0;
	float average;
	for(index=0;index<5;index++){
		printf("%d element :%d\n",index,values[index]);
	tot=tot+values[index];
	}
    printf("Total:%d\n",tot);
	average=tot/index;
	printf("Average:%f\n",average);
	return 0;
}