/**
프로그램명 : 11718.c
설명 : 그대로 출력하기 
작성일시 : 2022.01.21
작성자 : 정소영
**/

#include<stdio.h>
int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        printf("%c", c);
    }
}

/**
실행 결과
Hello
Hello
Baekjoon
Baekjoon
Online Judge
Online Judge
**/ 
