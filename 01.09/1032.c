/**
프로그램명 : 1032.c
설명 : 명령 프롬프트 
작성일시 : 2022.01.09
작성자 : 정소영
**/

#include <stdio.h>

int main(){
	char word[51][51];
	int n,i,j;
	
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%s",word[i]);
	
	for (i=0;i<strlen(word);i++)
		for (j=0;j<n-1;j++)
			if (word[j][i]!=word[j+1][i]){
				word[0][i]='?';
				break;
			}
	
	printf("%s",word[0]);
}

/**
실행 결과
3            (입력) 
config.sys
config.inf
configures
config????   (출력) 
**/
