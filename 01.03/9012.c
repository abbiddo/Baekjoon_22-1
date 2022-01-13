/**
프로그램명 : 9012.c
설명 : 괄호 
작성일시 : 2022.01.03 -> 13
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,cnt=0;
	char a[10000][51];
	scanf("%d",&n);
	
	for (i=0;i<n;i++) scanf("%s",a[i]);
	
	for (i=0;i<n;i++){
		cnt=0;
		for (j=0;j<strlen(a[i]);j++){
			if (a[i][j]=='(') cnt+=1;
			else cnt-=1;
			
			if (cnt<0) break;
		}
		if (cnt!=0) printf("NO\n");
		else printf("YES\n");
	}
}

/**
실행 결과
6               (입력) 
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(
NO              (출력) 
NO
YES
NO
YES
NO

**/ 
