/**
프로그램명 : 1057.c
설명 : 토너먼트 
작성일시 : 2022.01.07
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int a,n,m,cnt=1;
	scanf("%d %d %d",&a,&n,&m);

	while(1){
		if(n%2==1) n++;
		if(m%2==1) m++;

		if (n==m) break;

		cnt++;		
		n/=2;
		m/=2;			
	} 
	printf("%d",cnt);
}
/**
실행 결과
65536 1000 35000     (입력) 
16                   (출력) 
**/ 
