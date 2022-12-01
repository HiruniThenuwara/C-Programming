#include<stdio.h>
main() {
	int number1;
	int number2;
	
	printf("Enter number1:");
	scanf("%d",& number1);
	printf("Enter number2 :");
	scanf("%d",& number2);
	
	int addition=number1+number2;
	int substraction=number1-number2;
	int multipication=number1*number2;
	int division=number1/number2;
	
	printf("Addition:%d\n",addition);
	printf("Substraction:%d\n",substraction);
	printf("Multipication:%d\n",multipication);
	printf("Division:%d\n",division);
	return 0;
}
