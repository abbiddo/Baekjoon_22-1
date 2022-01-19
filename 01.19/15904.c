/**
프로그램명 : 15904.c
설명 :  약자 찾기 
작성일시 : 2022.01.19
작성자 : 정소영
**/

#include <stdio.h>
int main(){
    char word[1001],u[]={'U','C','P','C'};
    int i=0,k=0,j=0,cnt=0;
    do{
    	scanf("%c",&word[i]);
	}while(word[i++]!='\n');
    
    for (k=0;k<i;k++){
    	if (word[k]==u[j]){
    		j++;
    		cnt++;
		}
		
		if (cnt==4) break;
	}
	
	if (cnt==4) printf("I love UCPC");
	else printf("I hate UCPC");
}

/**
실행 결과
Union of Computer Programming Contest club contest     (입력) 
I love UCPC     (출력) 
**/ 
