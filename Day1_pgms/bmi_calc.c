

/*Program to calculate BMI using weight and height from user
 * Author:Nithin
 * Date:24th May 2024 */
#include<stdio.h>
int main(){
	float weight,height,bmi;
	printf("\nEnter the weight in kgs:\n");
	scanf("%f",&weight);
	printf("\nEnter the height in cm:\n");
	scanf("%f",&height);
	height=height/100;
	bmi=weight/(height*height);
	if(bmi>=30){
		printf("\nObesity!\n");
	}else if(bmi>=25 && bmi<30){
		printf("\nOverweight\n");
	}else if(bmi>=18.5 && bmi<25){
		printf("\nNormal weight\n");
	}else if(bmi<18.5){
		printf("\nUnder weight\n");
	}else{
		printf("\n Invalid\n");
	}
}
