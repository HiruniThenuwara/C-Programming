#include<stdio.h>
int main() {
	char student_name[20];
	printf("Enter student name:");
	scanf("%s",student_name);
	int sub1;
	int sub2;
	int sub3;

	printf("Enter mark of sub1:");
	scanf("%d",& sub1);
	printf("Enter mark of sub2:");
	scanf("%d",& sub2);
	printf("Enter mark of sub3:");
	scanf("%d",& sub3);
	float average=(sub1+sub2+sub3)/3;
	printf("average=%f\n",average);
	if(average>=70){
		printf("Grade:Distinction\n");
	}else if(average>=55){
		printf("Grade:Merit\n");
	}else if(average>=40){
		printf("Grade:General\n");
	}else{
		printf("Grade:Fail\n");
	}
	return 0;
}
