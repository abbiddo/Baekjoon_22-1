/**
프로그램명 : 1003.c
설명 : 피보나치 함수 0,1 
작성일시 : 2022.01.11
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,i,j,k,kk,re,a[100];
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		
		k=1;
		kk=re=0;
		
		for (j=0;j<a[i];j++){
			re=k+kk;
			k=kk;
			kk=re;
		}
		
		printf("%d %d\n",k,kk);
	} 
}

/**
실행 결과
2
6
5 8
22
10946 17711

**/ 
