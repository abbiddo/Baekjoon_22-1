/**
프로그램명 : 1463.c
설명 : 1 만들기 
작성일시 : 2022.01.25
작성자 : 정소영
**/

#include <stdio.h>
#define min(a,b) (a<b?a:b)
int main(){
	int a[1000001]={0,0,1,1};
	int n,i;
	scanf("%d",&n);
	
	for (i=4;i<=n;i++){
		if (i%2!=0 && i%3!=0) a[i]=a[i-1]+1;
		else if (i%6==0) a[i]=min(a[i/2],a[i/3])+1;
		else if (i%3==0) a[i]=min(a[i/3],a[i-1])+1;
		else if (i%2==0) a[i]=min(a[i/2],a[i-1])+1;
	}
	
	printf("%d",a[n]);
}

/**
실행 결과
1000  (입력)
9     (출력) 
**/ 
