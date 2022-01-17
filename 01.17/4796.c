/**
프로그램명 : 4796.c
설명 : 캠핑장 이용일 수 
작성일시 : 2022.01.17
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int a,b,c,re=0,i=1;
	
	while(1){
		re=0;
		scanf("%d %d %d",&a,&b,&c);
		if (c==0) break;
		re+=(c/b)*a;
		
		if (c%b>a) printf("Case %d: %d\n",i++,re+a);
		else printf("Case %d: %d\n",i++,re+(c%b));
	}
}

/**
실행 결과
5 8 20
Case 1: 14
5 8 17
Case 2: 11
0 0 0
**/ 
