#include<stdio.h>
int main(){
	int age;
	int job;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age>18){
		printf("Choose your job\n Doctor-Press number 1\n Engineer-Press number 2\n Technician-Press number 3\n");
		scanf("%d",& job);
		if(job==1){
			printf("Age :%d\n",age);
			printf("Job : Doctor\n");
		}else if(job==2){
			printf("Age :%d\n",age);
			printf("Job : Engineer\n");
		}else if(job==3){
			printf("Age :%d\n",age);
			printf("Job : Technician\n");
		}else{
			printf("You entered job number is wrong\n");
		}
	}else{
		printf("Not fit for a job\n");
	}
}