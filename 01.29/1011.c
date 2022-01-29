/**
프로그램명 : 1011.c
설명 : Fly me to the Alpha Centauri 
작성일시 : 2022.01.29
작성자 : 정소영
**/

#include <stdio.h>
#include <math.h>
int main(){
	int n,i,x,y,z,j;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		z=y-x;
		j=round(sqrt(z));
		if (sqrt(z)<=j) printf("%d\n",2*j-1);
		else printf("%d\n",2*j);
	}
}

/**
실행 결과
3
0 3
3
1 5
3
45 50
4

**/ 
