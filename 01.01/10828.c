/**
프로그램명 : 10828.c
설명 : 정수를 저장하는 스택 구현   
작성일시 : 2022.01.01
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>            // strcmp 함수를 위한 헤더파일 선언      

void push(int a);              // 함수 선언
int pop();
int size();
int empty();
int top();

int S[10000];
int i = 0;

int main() {
	int n,pn,j;
	char a[10] = { 0, }, num[10000] = { 0, };

	scanf("%d", &n);            // 명령 횟수 입력

	for (j = 0; j < n; j++) {
		scanf("%s", a);         // 명령 입력
	
		if (!(strcmp(a,"push"))) {                                  // push일 경우
			scanf("%d", &pn);                                       // 데이터 받기
			push(pn);                                               // push 함수 실행
		}
		else if (!(strcmp(a, "pop"))) printf("%d\n", pop());        // pop일 경우 pop 함수 실행
		else if (!(strcmp(a, "size"))) printf("%d\n", size());      // size일 경우 size 함수 실행
		else if (!(strcmp(a, "empty"))) printf("%d\n", empty());    // empty일 경우 empty 함수 실행
		else if (!(strcmp(a, "top"))) printf("%d\n", top());        // top일 경우 top 함수 실행
	}
}

void push(int a) {                                                   
	S[i++] = a;                         // 스택 배열에 데이터 추가 후 i를 증가시켜 다음 인덱스 가리킴
}

int pop() {           
	if (i == 0) return -1;              // 스택 배열이 비어 있으면 -1 반환
	return S[--i];                      // 스택 배열의 이전 인덱스를 반환하고 가리킴 
}

int size() {
	return i;                           // 스택 배열의 크기 (인덱스 위치) 반환                        
}

int empty() {
	if (i == 0) return 1;               // 스택 배열이 비어 있으면 1 반환
	return 0;                           // 아니면 0 반환
}

int top() {
	if (i == 0) return -1;              // 스택 배열이 비어 있으면 -1 반환
	return S[i-1];                      // 스택 배열의 마지막 값 반환, 인덱스 위치 변환 X
}

/**
실행 결과
14
push 1
push 2
top
2
size
2
empty
0
pop
2
pop
1
pop
-1
size
0
empty
1
pop
-1
push 3
empty
0
top
3
**/ 
