/**
프로그램명 : 1051.c
설명 : 숫자 정사각형 
작성일시 : 2022.01.02
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,m,i,j,k,b,min,max=1;
	char a[50][50];
	scanf("%d %d",&n,&m);
	
	for (i=0;i<n;i++) scanf("%s",&a[i]);
		
	if (m<n) min=m;
	else min=n;
	
	for (i=0;i<n-1;i++)
		for (j=0;j<m-1;j++)
			for (k=1;k<min-i;k++){
				b=(a[i][j]==a[i][j+k])&&(a[i+k][j]==a[i+k][j+k])&&(a[i+k][j]==a[i][j+k]);
				if (b==1&&(k+1)*(k+1)>max) max=(k+1)*(k+1);
			}
	
	printf("%d",max);
}

/**
실행 결과
3 5    (입력) 
42101
22100
22101
9      (출력) 
**/ 
