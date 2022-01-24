/**
프로그램명 : 1373.c
설명 : 2진수 -> 8진수 
작성일시 : 2022.01.24
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

int main(){
	char n[1000001];
	int i=0,j,len,l;
	scanf("%s",n);
	
	len=strlen(n);
	
	if (n[0]-48==0) printf("0");
	else{
		if (len%3==1) {
			printf("1");
			i++;
		}
		else if (len%3==2){
			printf("%d",2*(n[i++]-48)+(n[i++]-48));
		}
		
		for (j=0;j<len/3;j++){
			printf("%d",4*(n[i++]-48)+2*(n[i++]-48)+(n[i++]-48));
		}
	}
}

/**
실행 결과
11001100  (입력) 
314       (출력) 
**/ 
