#include<stdio.h>
float calAverage(intx,inty,intz){
	float avg=(intx+inty+intz)/3;
	return avg;
}
	void findFinalGrade(float average){
		if(average>=60){
			printf("Final Grade :A\n");
		}else if(average>=45){
			printf("Final Grade :B\n");
		}else{
			printf("Final Grade :F\n");
		}
	}
	int main(){
		int maths,science,it;
		printf("Enter Maths Marks :");
		scanf("%d",& maths);
		printf("Enter Science Marks :");
		scanf("%d",& science);
		printf("Enter IT Marks :");
		scanf("%d",& it);
		
		float average=calAverage(maths,science,it);
		findFinalGrade(average);
		printf("Average :%.2f\n",average);
		return 0;
		
	}