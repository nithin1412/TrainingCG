/*3. Write a program to check if two strings are anagrams of each other*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char str1[50],str2[50];
	int hash[100]={0};
	printf("\n Enter a String 1:\n");
	scanf("%s",str1);

	printf("\n Enter a string 2:\n");
	scanf("%s",str2);

	if(strlen(str1)!=strlen(str2)){
		printf("\n Its is not an anagram.!\n");
		exit(0);
	}
	for(int i=0;i<str1[i]!='\0';i++)
	{
		hash[str1[i]-'A']++;
		hash[str2[i]-'A']--;
	}
	for(int i=0;i<str1[i]!='\0';i++){
		if(hash[str1[i]-'A']!=0){
			printf("\n String is not a Anagram\n");
			exit(0);
		}
	}
	printf("\n Given two string are anagram to eachother \n");
	return 0;
}


