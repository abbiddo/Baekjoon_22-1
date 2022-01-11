/**
프로그램명 : 10814.c
설명 : 나이순 정렬 
작성일시 : 2022.01.02
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j,age[10000],temp;
	char name[10000][100],tmp[20];
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
		scanf("%d %s",&age[i],name[i]);
	
	// 버블 정렬 
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
			if (age[j]>age[j+1]){             // 조건에 맞으면                   
				temp=age[j];                     // 나이 위치 바꾸기 
				age[j]=age[j+1];
				age[j+1]=temp;
				
				strcpy(tmp,name[j]);             // 이름 위치 바꾸기 
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],tmp);
			}
		}
	}
	
	for (i=0;i<n;i++)
		printf("%d %s\n",age[i],name[i]);
}

/**
실행 결과
3
21 Junkyu
21 Dohyun
20 Sunyoung
20 Sunyoung
21 Junkyu
21 Dohyun

**/ 
