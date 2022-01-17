/**
프로그램명 : 2822.c
설명 : 상위 5개 점수 합 
작성일시 : 2022.01.17
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int a[8],i,j,min=150,m,sum=0;
	for (i=0;i<8;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	for (i=0;i<3;i++){
		min=150;
		for (j=0;j<8;j++){
			if (a[j]<min){
				min=a[j];
				m=j;
			}
		}
		sum-=a[m];
		a[m]=200;
	}
	printf("%d\n",sum);
	for (i=0;i<8;i++){
		if (a[i]!=200) printf("%d ",i+1);
	}
}

/**
실행 결과
20          (입력) 
30
50
48
33
66
0
64
261         (출력) 
3 4 5 6 8 
**/ 
