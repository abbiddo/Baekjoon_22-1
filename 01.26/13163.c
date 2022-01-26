/**
프로그램명 : 13163.c
설명 : 이름에 god 붙이기 
작성일시 : 2022.01.26
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j=0,k;
	char name[100],a;
	scanf("%d",&n);
	scanf("%c",&a);
	
	for (i=0;i<n;i++){
		j=0;
		scanf("%[^\n]s",name);
		scanf("%c",&a);
		while(name[j]!=' ') name[j++];
		printf("god");
		for (k=j;k<strlen(name);k++)
			if (name[k]!=' ') printf("%c",name[k]);
		printf("\n");
	}	
}

/**
실행 결과
5
baek joon
godjoon
koo sa ga
godsaga
ac ka
godka
yu ka ri ko
godkariko
ke sa ki yo
godsakiyo

**/ 
