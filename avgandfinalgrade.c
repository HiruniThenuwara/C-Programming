#include<stdio.h>
int maths,science,it;
float average;
char final_grade;
void get_Inputs(){
	char name[20];
	printf("Enter student name :");
	scanf("%s",name);
	printf("Enter Maths Marks :");
	scanf("%d",& maths);
	printf("Enter Science Marks :");
	scanf("%d",& science);
	printf("Enter IT Marks :");
	scanf("%d",& it);
}
void find_grade(){
	average=(maths+science+it)/3;
	if(average>=60){
		final_grade='A';
	}else if(average>=45){
		final_grade='B';
	}else{
		final_grade='F';
	}
}
void display_details(){
	printf("Average Marks :%.2f\n",average);
	printf("Final Grade :%c\n",final_grade);
}
int main(){
	get_Inputs();
	find_grade();
	display_details();
	return 0;
}