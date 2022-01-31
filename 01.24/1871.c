/**
프로그램명 : 1871.c
설명 : 좋은 자동차 번호판 
작성일시 : 2022.01.24
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,i,al=0,nu=0;
	char name[10];
	
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s",name);
		al=0;
		nu=0;
		al+=(26*26*(name[0]-65))+(26*(name[1]-65))+(name[2]-65);
		nu+=(1000*(name[4]-48)+100*(name[5]-48)+10*(name[6]-48)+name[7]-48);
		
		if ((al-nu)<101 && (al-nu)>-101) printf("nice\n");
		else printf("not nice\n");
	}
}

/**
실행 결과
2
ABC-0123
nice
AAA-9999
not nice
**/
