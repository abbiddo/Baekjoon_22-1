/**
프로그램명 : 1427.cpp
설명 : 정수 정렬 
작성일시 : 2022.01.04
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h> 
int main(){
	char a[1000000];
	int i,j,temp;
	
	scanf("%s",a);
	
	for (i=0;i<strlen(a);i++){
		for (j=0;j<strlen(a)-i-1;j++){
			if (a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("%s",a);
}

/**
2143
4321
**/ 
