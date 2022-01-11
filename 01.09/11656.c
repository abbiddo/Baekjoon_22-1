/**
프로그램명 : 11656.c
설명 : 접미사 배열  
작성일시 : 2022.01.09
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
int main(){
	int i,j;
    char word[1001],w[1001][1001],temp[1001];
    scanf("%s",word);
    
    for (i=0;i<strlen(word);i++)
    	for (j=i;j<strlen(word);j++)
    		w[i][j-i]=word[j];
	
  // 버블 정렬 범위 * len-1 * 
	for (i=0;i<strlen(word)-1;i++){
		for (j=0;j<strlen(word)-i-1;j++){
			if (strcmp(w[j],w[j+1])>0){
				strcpy(temp,w[j]);
				strcpy(w[j],w[j+1]);
				strcpy(w[j+1],temp);
			}
		}
	}
	
	for (i=0;i<strlen(word);i++) printf("%s\n",w[i]);
}

/**
실행 결과
baekjoon   (입력) 
aekjoon    (출력) 
baekjoon
ekjoon
joon
kjoon
n
on
oon

**/
