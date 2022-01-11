/**
프로그램명 : 1003.c
설명 : 피보나치 함수 0,1 
작성일시 : 2022.01.11
작성자 : 정소영
**/

#include <stdio.h>

int n0=0;
int n1=0;

int fibo(int n) {
    if (n == 0) {
        //printf("0");
        n0++;
        return 0;
    } 
	
	else if (n == 1) {
        //printf("1");
        n1++;
        return 1;
    } 
    
	else return fibo(n-1) + fibo(n-2);
}

int main(){
	int n,i,a[40];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		n0=0;
		n1=0;
		scanf("%d",&a[i]);
		fibo(a[i]);
		printf("%d %d\n",n0,n1);
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
