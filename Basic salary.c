#include<stdio.h>
int main(){
	char emp_name[20];
	float basic_salary;
	int OT_hours;
	printf("Enter employee name\n");
	scanf("%s",emp_name);
	printf("Enter basic salary\n");
	scanf("%f",&basic_salary);
	printf("Enter OT hours\n");
	scanf("%d",& OT_hours);
	int hourly_rate=0;
	if(OT_hours>=50){
		hourly_rate=100;
		
	}else{
		hourly_rate=125;
	}
	float final_salary=basic_salary+(OT_hours*hourly_rate);
	printf("final_salary:%f\n",final_salary);
	return 0;
}