#include<stdio.h>
int main (){
	int no;
	int c;
	for(no=1;no<=10;no++){
		for(c=1;c<=(11-no);c++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}