/*Program to determine grade by taking score from user
 * Author:Nithin
 * Date:24th May 2024 */
#include<stdio.h>
int main(){
	int marks;
	printf("\nEnter the marks:\n");
	scanf("%d",&marks);
	if(marks>100 || marks<0){
		printf("\nWrong Entry\n");
	}else if(marks>=90){
		printf("\nGrade A\n");
	}else if(marks>=80 && marks<90){
		printf("\nGrade B\n");
	}else if(marks>=70 && marks<80){
		printf("\nGrade C\n");
	}else if(marks>=60 && marks<70){
		printf("\nGrade D\n");
	}else{
		printf("\nGradeF\n");
	}
}
