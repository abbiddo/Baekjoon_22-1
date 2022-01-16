/**
프로그램명 : 2018.c
설명 : 수들의 합 
작성일시 : 2022.01.16
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,sum=0,cnt=0;
	
	scanf("%d",&n);
	for (i=1;i<=n/2;i++){
		sum=0;
		j=i;
		while(1){
			if (sum==n){
				cnt++;
				break;
			}
			else if (sum>n) break;
			
			sum+=j++;
		}
	}
	printf("%d",cnt+1);
}

/**
실행 결과
15  (입력) 
4   (출력) 
**/ 
