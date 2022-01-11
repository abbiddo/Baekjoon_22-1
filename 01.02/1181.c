/**
프로그램명 : 1181.c
설명 : 단어 정렬 
작성일시 : 2022.01.02
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j;
	char a[20000][50],temp[50];
	scanf("%d",&n);
	
	for (i=0;i<n;i++) scanf("%s",a[i]);
	
	for (j=0;j<n;j++)
		for (i=0;i<n-j-1;i++){
			if (strlen(a[i])>strlen(a[i+1])){
				strcpy(temp,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],temp);
			}
			else if (strlen(a[i])==strlen(a[i+1]))
				if (strcmp(a[i],a[i+1])>0){
					strcpy(temp,a[i]);
					strcpy(a[i],a[i+1]);
					strcpy(a[i+1],temp);
				}
		}
	
	for (i=0;i<n;i++) printf("%s\n",a[i]);
}

/**
실행 결과
13       (입력) 
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours
i        (출력)
im
it
no
no
but
more
more
wait
wont
yours
cannot
hesitate

**/ 
