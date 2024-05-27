/*3. C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(){
	 int  dig=0,pdig,root, num;
	 printf("\nEnter a positive Number:\n");
	 scanf("%d",&num);
	int  n=num;
	 
	 while(n>0){
		 n/=10;
		 dig++;
	 }
	 root=num*num;
	 pdig=pow(10,dig);

	 if((root%pdig)==(num)){
		 printf("\nThe  number %d is an automorphic number\n",num);
	 }
	 else
	 {
		 printf("\n The number%d is not an automorphic number\n",num);
	 }
	 
	 return 0;
 }


