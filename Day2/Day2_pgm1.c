/*1. Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digit */

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,num,sum=0,rem;
	printf("\nEnter a positive number: \n");
	scanf("%d",&num);
	n=num;
	if(num<0){
		printf("\nInvalid!\n");
		exit(0);
	}
	while(n>0){
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("\nSum of digits of number %d  is:%d\n",num,sum);
	return 0;
}

