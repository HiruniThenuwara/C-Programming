#include<stdio.h>
int main(){
	int line,count,s,in;
	printf("Enter raws:");
	scanf("%d",&in);
	for(line=1;line<=in;line++){
		for(s=1;s<=(in-line);s++){
			printf(" ");
		}
		for(count=1;count<=line;count++){
			printf("*");
		}
		for(count=1;count<=line-1;count++){
			printf("*");
		}
		printf("\n");
		
	}
	int a=in-1;
	int q=1;
	for(line=1;line<=a;line++){
		for(s=a;s>(a-line);s--){
			printf(" ");
		}
		for(count=1;count<=((a*2)-q);count++){
			printf("*");
		}
		q=q+2;
		printf("\n");
	}
}