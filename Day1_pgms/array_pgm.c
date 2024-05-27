/*Array program*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int size,i;
	printf("\n Enter the size of the array:\n");
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;++i){

        	printf("\nEnter the elements of the array:");
                scanf("%d",&a[i]);
	}
	for(int i=0;i<size;++i){
		printf("%d\t",a[i]);
	}//Reversing the array
	for(i=size-1;i>=0;--i){
		printf("\nReverse of the array %d",a[i]);
	}//Linear search
	for(i=0;<=size;i++)}

	printf("\n \n");
	return EXIT_SUCCESS;
}
         	
