/**
프로그램명 : 10808.c
설명 : 알파벳 개수 
작성일시 : 2022.01.10
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

int main(){
	char word[101];
	int i,alpha[26]={0,};
	
	scanf("%s",word);
	
	for (i=0;i<strlen(word);i++)
		alpha[word[i]-97]+=1;
		
	for (i=0;i<26;i++) printf("%d ",alpha[i]);
}

/**
실행 결과
baekjoon
1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0
**/ 
