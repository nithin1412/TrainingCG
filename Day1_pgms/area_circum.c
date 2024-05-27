/*Program to calculate area and circumference of circle*/
#include<stdio.h>
#define PI 3.14
int main(){
         float r,area,circum;
	 printf("\nEnter the value of radius:\n");
	 scanf("%f",&r);
	 area=PI*r*r;
	 circum=2*PI*r;
	 printf("\nArea of circle:%f",area);
	 printf("\nCircumference of circle:%f",circum);
	 return 0;
}
