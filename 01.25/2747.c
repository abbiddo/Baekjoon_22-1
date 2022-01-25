/**
프로그램명 : 2747.c
설명 : 피보나치 
작성일시 : 2022.01.25
작성자 : 정소영
**/

#include <stdio.h>
int a[50]={0,1,1};
int fibo(int n){
	if (n<3) return a[n];
	return a[n-1]+a[n-2];
}

int main(){
	int n,i;
	scanf("%d",&n);
	for (i=0;i<=n;i++) a[i]=fibo(i);
	printf("%d",a[n]);
}

/**
실행 결과
17    (입력) 
1597  (출력) 
**/ 
