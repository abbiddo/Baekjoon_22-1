/**
프로그램명 : 11866.c
설명 : 요세푸스 
작성일시 : 2022.01.06
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,m,k,i,yose[1000];
  
	scanf("%d %d",&n,&m);
	printf("<");
	k=m-1;

	for (i=0;i<n;i++) yose[i]=i+1;
	
	for (i=0;i<n;i++){
		if (k>=n) k-=n;
		if (yose[k]!=0){
			printf("%d, ",yose[k]);
			yose[k]=0;
			k+=m;
		}
		else k++;
	}
	printf("\b\b>");
}
  
/**
실행 결과
7 3                    (입력) 
<3, 6, 2, 5, 1, 4, 7>  (출력) 
**/ 
