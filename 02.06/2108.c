/**
프로그램명 : 2108.c
설명 : 통계학 
작성일시 : 2022.02.06
작성자 : 정소영
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b){
	if (*(int *)a<*(int *)b) return -1;
	if (*(int *)a>*(int *)b) return 1;
	return 0;
}

int main(){
	int n,a[500000]={0},num[8001]={0},i,j,temp,k,s=0,max=0;
	int sum=0;
	scanf("%d",&n);
	
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sum+=a[i];
		num[a[i]+4000]++;
	}
	
	printf("%.0f\n",(double)sum/n);
	
	qsort(a,n,4,compare);
	
	for (i=0;i<8001;i++){
		if (max<num[i]){
			k=i-4000;
			max=num[i];
			s=0;
		}
		else if (max==num[i]&&s==0){
			s=1;
			k=i-4000;
		}
	}
	
	printf("%d\n%d\n%d",a[n/2],k,a[n-1]-a[0]);	
}

/**
실행 결과
5   (입력) 
-1
-2
-3
-1
-2
-2  (출력) 
-2
-1
2
**/ 
