/**
프로그램명 : 1343.c
설명 : 폴리오미노 
작성일시 : 2022.01.16
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
int main(){
	char bord[51]={0,};
	int i,j,k=0,cnt=0;
	
	scanf("%s",bord);
	
	for (i=0;i<strlen(bord);i++){
		cnt=0;
		while(bord[i++]=='X') cnt++;

		i--;            // if (cnt!=0) 조건을 넣었는데 
						// while에서 검사할 때 i가 1이 더해져 
						// cnt==0이어도 i--해줘야 함 
	
		if (cnt!=0 && cnt%4==0)
			for (j=i-cnt;j<i;j++) bord[j]='A';
		else if (cnt!=0 && cnt%2==0) {
			for (j=i-cnt;j<i-2;j++) bord[j]='A';
			for (j=i-2;j<i;j++) bord[j]='B';
		}
		else if (cnt!=0){
			k=1;
			printf("-1");
			break;
		}
	}
	if (k==0){
		for (i=0;i<strlen(bord);i++) printf("%c",bord[i]);
	}
}

/**
실행 결과
XX.XXXXXXXXXX..XXXXXXXX...XXXXXX
BB.AAAAAAAABB..AAAAAAAA...AAAABB
**/ 
