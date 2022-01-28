/**
프로그램명 : 2445.c
설명 : 나비 별 출력 
작성일시 : 2022.01.28
작성자 : 정소영
**/

#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    
    for (i=0;i<n-1;i++){
    	for (j=0;j<=i;j++) printf("*");
        for (j=2;j<2*(n-i);j++) printf(" ");
        for (j=0;j<=i;j++) printf("*");
        printf("\n");
    }
    
    for (i=0;i<2*n;i++) printf("*");
    printf("\n");
    
    for (i=n-2;i>=0;i--){
    	for (j=0;j<=i;j++) printf("*");
        for (j=2;j<2*(n-i);j++) printf(" ");
        for (j=0;j<=i;j++) printf("*");
        printf("\n");
    }
}

/**
실행 결과
5              (입력) 
*        *     (출력) 
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

**/ 
