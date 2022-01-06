/**
프로그램명 : 2164.c
설명 : 카드 큐 
작성일시 : 2022.01.06
작성자 : 정소영
**/

#include <stdio.h>

void push(int a);
void pop();

int j=0;
int k=0;
int card[1000000];

int main(){
	int i,n;
	scanf("%d",&n);
	k=n;
	
	for (i=0;i<n;i++) card[i]=i+1;
	
	for (i=1;i<n;i++){
		pop();
		push(card[j]);
		pop();
	}   
	printf("%d",card[j]);
}

void push(int a){
	card[k++]=a;
}

void pop(){
	card[j++]=0;
}

/**
실행 결과
6    (입력)
4    (출력)
**/ 
