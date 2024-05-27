/*Program to find largest of three numbers*/

#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("\nEnter the three numbers;\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if((n1>n2)&&(n1>n3)){
		printf("\n n1 is largest\n");
	}else if(n2>n3){
		printf("\n n2 is largest\n");
	}else{
		printf("\n n3 is largest\n");
	}
}
