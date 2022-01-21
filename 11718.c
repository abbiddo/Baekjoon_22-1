/**
프로그램명 : 11718.c
설명 : 그대로 출력하기 
작성일시 : 2022.01.21
작성자 : 정소영
**/

#include <stdio.h>
char s[101];
int main() {
    while (scanf("%[^\n]\n",s)==1) {
        printf("%s\n",s);
    }
    return 0;
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
