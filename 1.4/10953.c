/**
프로그램명 : 10953.c
설명 : A+B 
작성일시 : 2022.01.04
작성자 : 정소영
**/

#include <stdio.h> 
int main(){
	int a[1000],i,n;
	scanf("%d",&n);
	
	for (i=0;i<2*n;i+=2) scanf("%d,%d",&a[i],&a[i+1]);
	for (i=0;i<2*n;i+=2) printf("%d\n",a[i]+a[i+1]);
}

/**
5   (입력) 
1,1
2,3
3,4
9,8
5,2
2   (츨력) 
5
7
17
7

**/ 
