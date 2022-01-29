/**
프로그램명 : 11866.c
설명 : 요세푸스 
작성일시 : 2022.01.06
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,m,k,i,j,jose[1000];
  
	scanf("%d %d",&n,&m);
	printf("<");
	k=m-1;

	for (i=0;i<n;i++) jose[i]=i+1;
	
	for (i=0;i<n-1;i++){
		printf("%d, ",jose[k]);	
		jose[k]=0;

		for (j=0;j<m;j++){
			k++;
			if (k>=n) k-=n;
			if (jose[k]==0)	j--;
		}	
	}
	printf("%d>",jose[k]);
}
  
/**
실행 결과
7 3                    (입력) 
<3, 6, 2, 7, 5, 1, 4>  (출력) 
**/
