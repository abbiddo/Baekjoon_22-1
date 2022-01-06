/**
프로그램명 : 10798.c
설명 : 세로읽기 
작성일시 : 2022.01.06
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	char a[5][15]={0,};
	int i,j;
	
	for (i=0;i<5;i++) scanf("%s",a[i]);
	
	for (i=0;i<15;i++){
		for (j=0;j<5;j++){
			if (a[j][i]!=0) printf("%c",a[j][i]);
		}
	}
}

/**
실행 결과
AABCDD                       (입력) 
afzz
09121
a8EWg6
P5h3kx
Aa0aPAf985Bz1EhCz2W3D1gkD6x  (출력) 
**/ 
