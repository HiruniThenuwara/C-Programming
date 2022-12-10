#include<stdio.h>
int main (){
	int no;
	int c,s;
	for(no=1;no<=4;no++){
		for(s=1;s<=no;s++){
			printf(" ");
		}
		for(c=1;c<=(5-no);c++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}