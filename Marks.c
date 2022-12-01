#include<stdio.h>
int main()  {
	int final_marks;
	printf("Enter your final marks");
	scanf("%d",& final_marks);
	if(final_marks>=60){
		printf("Congratulations,you have passed the exam..\n");
	}
	printf("Thank you for your participation...\n");
	return 0;
}