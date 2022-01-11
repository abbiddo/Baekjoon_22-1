/**
프로그램명 : 10773.c
설명 : 스택 (push, pop) 활용 
작성일시 : 2022.01.01
작성자 : 정소영
**/

#include <stdio.h>

void push(int a);               // 함수 선언
void pop();

int S[100000];
int i = 0;

int main() {
	int n,j,m,sum=0;

	scanf("%d", &n);            // 횟수 입력

	for (j = 0; j < n; j++) {
		scanf("%d", &m);
		if (m == 0) pop();      // 0 입력 시 pop 함수 실행
		else push(m);           // 아니면 push 함수 실행 
	}

	for (j = 0; j < i; j++)
		sum += S[j];            // 스택 데이터 합 

	printf("%d", sum);
}

void push(int a) {                                                   
	S[i++] = a;                 // 스택 배열에 데이터 추가 후 i를 증가시켜 다음 인덱스 가리킴
}

void pop() {
	i--;                        // 이전 인덱스를 가리킴 
}

/**
실행 결과
4
3
0
4
0
0
**/ 
