/**
프로그램명 : 1914.c
설명 : 하노이 탑 
작성일시 : 2022.01.09
작성자 : 정소영
**/

#include <stdio.h>
#include <math.h>
void hanoi(int n, int a, int b, int c){
	if (n==1) printf("%d %d\n",a,c);
	else{
		hanoi(n-1,a,c,b);
		hanoi(1,a,b,c);
		hanoi(n-1,b,a,c);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	pow(n);
	
	if(n<21) hanoi(n,1,2,3);
}

/**
실행 결과
65536 1000 35000     (입력) 
16                   (출력) 
**/ 
