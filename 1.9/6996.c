/**
프로그램명 : 6996.c
설명 : 애나그램 
작성일시 : 2022.01.09 -> 10
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

int main(){
	char ana[200][100],temp[101];
	int n,i,j,jj,k=0;
	
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s %s",ana[i],ana[i+100]);
		k=0;
		
		strcpy(temp,ana[i+100]);
		
		if (strlen(ana[i])!=strlen(ana[i+100])) 
			printf("%s & %s are NOT anagrams.\n",ana[i],temp);
		
		else{
			k=0;
			for (j=0;j<strlen(ana[i]);j++){
				for (jj=0;jj<strlen(ana[i]);jj++){
					if (ana[i][j]==ana[i+100][jj]){
						ana[i+100][jj]=0;
						k++;
						break;
					}
				}
				
				if (k!=j+1){
					printf("%s & %s are NOT anagrams.\n",ana[i],temp);
					break;
				}
			}
			
			if (j>=strlen(ana[i]) && k==j) printf("%s & %s are anagrams.\n",ana[i],temp);
		}
	}
}

/**
실행 결과
3                   
blather reblath
blather & reblath are anagrams.
maryland landam
maryland & landam are NOT anagrams.
bizarre brazier
bizarre & brazier are anagrams.

**/ 
