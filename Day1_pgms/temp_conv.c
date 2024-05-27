/*Program to convert temperature from celsius to fahrenheit*/
#include<stdio.h>

int main(){
	float temp;
	float celsius;
	printf("\n Enter the value:\n");
	scanf("%f",&temp);
	temp=celsius*(9/5)+32;
	printf("\nCelsius to Fahrenheit is:%f\n",temp);
	printf("\n");
	return 0;
}
