/*Write a program to rotate an array of n elements to the right by k steps.*/

#include<stdio.h>
 void rev(int arr[],int a,int b);
 void rotate(int arr[],int n,int k);
 int main(){
	 int n,k;
	 printf("\n Enter the size of the array:\n");
	 scanf("%d",&n);

	 int arr[n];

	 printf("\n Enter the elements of the array:\n");
	 for(int i=0;i<n;i++){
		 scanf("%d",&arr[i]);
	 }
	 printf("\n Enter the K value \n");
	 scanf("%d",&k);
	 k=k%n;
	 rotate(arr,n,k);

	 printf("Array elements after rotating %d steps:",k);
	 for(int i=0;i<n;i++){
		 printf("%d\t",arr[i]);
	 }
	 printf("\n");
	 return 0;
 }
 void rev(int arr[],int a , int b){
	 while(a<b){
		 int temp;
		 temp=arr[a];
		 arr[a]=arr[b];
		 arr[b]=temp;

		 a++;
		 b--;
	 }
 }
 void rotate(int arr[],int n,int k){
	 rev(arr,0,(n-1));
	 rev(arr,0,(k-1));
	 rev(arr,k,(n-1));
 }

