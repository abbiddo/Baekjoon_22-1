/**
프로그램명 : 2750.c
설명 : 정렬 
작성일시 : 2022.01.01
작성자 : 정소영
**/

#include <stdio.h>
int main() {
	int n,i,j,temp,a[1000];
	scanf("%d",&n);                            // 개수 입력 
	                
	for (i=0;i<n;i++) scanf("%d",&a[i]);       // 수 입력 
	
	for (i=0;i<n;i++){                         // 버블 정렬 
		for (j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for (i=0;i<n;i++) printf("%d\n",a[i]);     // 출력 
}

/**
실행 결과
5  (입력) 
5
2
4
3
1
1  (출력) 
2
3
4
5
**/ 
