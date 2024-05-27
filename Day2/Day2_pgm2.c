/*2. Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven digits.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(){
	 int  r1,r2,root;
	 long num;
	 printf("\nEnter a positive Number:\n");
	 scanf("%ld",&num);
	 if(num<0){
		 printf("\nInvalid.!!\n");
		 exit(0);
	 }
	 root = sqrt(num);
	 r1=root*root;
	 r2=(root+1)*(root+1);
	 if((num-r1)<(r2-num))
	 {
		 printf("\n The closest integer having a whole number sqrt is %d\n",r1);
	 }
	 else
	 {	
		 printf("\n The closest integer having a whole number sqrt is %d\n",r2);
	 }
	 return 0;
 }
