/*1. Given an array of integers, write a program to find all duplicate elements in the array.*/

#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
 
int main()
{
        int n;
 
        printf("Enter the size of an array : \n");
        scanf("%d",&n);
 
 
        int a[n];
        int hash[1000]={0};
 
        printf("Enter the numbers in an array : \n");
 
        for(int i=0;i<n;i++)
        {
                printf("Enter the elememt at pos %d\n",i+1);
                scanf("%d",&a[i]);
        }
 
 
        printf("Elememts are : ");
 
        for(int i=0;i<n;i++)
        {
                printf("%d\n \t",a[i]);
        }
 
 
        printf("\n Duplicate elements are : \n");
 
        for(int i=0;i<n;i++)
        {
                if(hash[a[i]] == 1){
 
                        printf("%d\t ",a[i]);
                }
                hash[a[i]]++;
        
	}
}
