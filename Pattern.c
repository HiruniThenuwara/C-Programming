#include<stdio.h>
int main(){
	int lines;
	int spaces;
	int stars;
	for(lines=1;lines<=10;lines++){
		for(spaces=1;spaces<=(10-lines);spaces++){
			printf(" ");
		}
		for(stars=1;stars<=lines;stars++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}