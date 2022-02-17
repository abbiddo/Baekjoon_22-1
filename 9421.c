/**
프로그램명 : 9421.c
설명 : 소수 상근수 
작성일시 : 2022.02.17
작성자 : 정소영
**/

#include <stdio.h>
arr[1000000]={0,1,2,2,2,2,2,1,2,2,1};
int main(){
	int n,i,j,k,kk,num=0,ox=0,jj;
	scanf("%d",&n);
	
	int a[100];
	for (i=7;i<=n;i++){
		k=0;
		j=i;
		ox=0;
		for (kk=2;kk<i;kk++)
			if (i%kk==0) break;
		while(i==kk){
			num=0;
			if (ox==1) break;
			while(j){
				num+=(j%10)*(j%10);
				j/=10;
			}
			j=num;
			if (num==1){
				printf("%d\n",i);
				ox=1;
				break;
			}
			if (arr[num]==1){
				printf("%d\n",i);
				ox=1;
				break;
			}
			if (arr[num]==2){
				ox=2;
				break;
			}
			for (jj=0;jj<k;jj++)
				if (a[jj]==num){
					ox=2;
					break;
				}
			if (ox==2) break;
			
			a[k++]=num;
		}
		
		for (jj=0;jj<k;jj++)
			arr[a[jj]]=ox;
	}
}

/**
실행 결과
20
-----
7
13
19

**/ 
