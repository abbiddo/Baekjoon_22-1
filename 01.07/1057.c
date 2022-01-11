/**
프로그램명 : 1057.c
설명 : 토너먼트 
작성일시 : 2022.01.07
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int a,n,m,cnt=0;
	scanf("%d %d %d",&a,&n,&m);

	while(n!=m){
		cnt++;	
		n-=(n/2);
		m-=(m/2);			
	} 
	printf("%d",cnt);
}
/**
실행 결과
65536 1000 35000     (입력) 
16                   (출력) 
**/ 
