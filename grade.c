#include<stdio.h>
int main() {
	char grade;
	printf("Enter the grade:");
	scanf("%c",&grade);
	switch(grade){
		case'A':
	    	printf("Execellent!\n");
		break;
		case'B':
		case'C':
     		printf("Well Done\n");
		break;
		case'D':
	    	printf("You Passed\n");
		break;
		case'F':
	    	printf("Better try again\n");
		break;
		default:
		printf("Invalid input\n");
		break;
	
	}
	return 0;
}