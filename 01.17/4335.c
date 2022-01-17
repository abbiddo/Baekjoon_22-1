/**
프로그램명 : 4335.c
설명 : 숫자 추측하기 
작성일시 : 2022.01.17
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,min=0,max=11;
	char ud[10];
	
	while(1){
		scanf("%d",&n);
		if (n==0) break;
		scanf("%s %s",ud,ud);
		
		if (ud[0]=='h' && max>n) max=n;
		else if (ud[0]=='l' && min<n) min=n;
		else if (ud[0]=='o'){
			if (min>=n || max<=n) printf("Stan is dishonest\n");
			else printf("Stan may be honest\n");
			min=0,max=11;
		}
	} 
}

/**
실행 결과
10
too high
3
too low
4
too high
2
right on
Stan is dishonest  (출력)
5
too low
7
too high
6
right on
Stan may be honest (출력)
0
**/ 
