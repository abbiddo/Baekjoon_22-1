/**
프로그램명 : 1920.c
설명 : 수 찾기
작성일시 : 2022.01.07 -> 02.07 (cpp 파일 생성)
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int i,j,n,m,k,a[100000],b[100000];
	
	scanf("%d",&n);	
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);	
	for (i=0;i<m;i++) scanf("%d",&b[i]);
	
	for (i=0;i<m;i++){
		k=0;
		for (j=0;j<n;j++){
			if (b[i]==a[j]){
				k=1;
				printf("1\n");
				break;
			}
		}
		if (k==0) printf("0\n");
	}
}

/**
실행 결과
5          (입력) 
4 1 5 2 3
5
1 3 7 9 5
1          (출력) 
1
0
0
1

**/
