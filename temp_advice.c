
/*Program to print advice based on temperature taking  from user
 * Author:Nithin
 * Date:24th May 2024 */
#include<stdio.h>
int main(){
	int temp;
	printf("\nEnter the Temperature:\n");
	scanf("%d",&temp);
	if(temp>30){
		printf("\nIts Hot outside,stay hydrated!\n");
	}else if(temp>=20 && temp<=30){
		printf("\nThe weather is nice and warm\n");
	}else if(temp>=10 && temp<20){
		printf("\nIts a bit chilly,wear a jacket\n");
	}else if(temp<10){
		printf("\nIts cold outside,stay warm\n");
	}else{
		printf("\n Invalid Temperature\n");
	}
}
