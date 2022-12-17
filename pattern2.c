#include<stdio.h>
int main (){
	int no;
	int c,s;
	for(no=1;no<=8;no++){
		for(c=1;c<=(8-no);c++){
			printf(" ");
		}
		for(s=1;s<=no;s++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}