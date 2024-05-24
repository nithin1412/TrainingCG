


/*Simple Calculator
 * Author:Nithin
 * Date:24th May 2024 */
#include<stdio.h>
int main(){
	float n1,n2,results;
	char opr;
	printf("\nEnter the two numbers:\n");
	scanf("%f%f",&n1,&n2);
	printf("\nEnter the operator '+','-','*','/':\n");
	scanf("%c",&opr);
	if(opr=='+'){
		printf("\nSum is: %f\n",results=(n1+n2));
	}else if(opr=='-'){
		printf("\nSubtraction is:%f\n",results=(n1-n2));
	}else if(opr=='*'){
		printf("\nMultiplication is :%f\n",results=(n1*n2));
	}else if(opr=='/'){
		printf("\nDivision is:%f\n",results=(n1/n2));
	}else{
		printf("\n Invalid\n");
	}
	return 0;
}
