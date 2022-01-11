//납득은 했으나 공부가 더 필요한 듯 (혼자 알 때 까지 해보기)

/**
프로그램명 : 11729.c
설명 : 하노이탑 
작성일시 : 2022.01.07
작성자 : 정소영
**/

#include <stdio.h>
#include <math.h>

void hanoi(int n, int a, int b, int c){
	if (n==1){
		printf("%d %d\n",a,c);
		return;
	}
	
	else{
		hanoi(n-1,a,c,b);          // 크게 보면 맨 위와 나머지로 볼 수 있음 (1 2, 1 3, 2 3)
		hanoi(1,a,b,c);
		hanoi(n-1,b,a,c);
	}
} 

int main(){
	int n,re;
	scanf("%d",&n);
	printf("%d\n",(int)pow(2,n)-1);
	
	hanoi(n,1,2,3);
}

/**
실행 결과
3     (입력) 
7     (출력) 
1 3
1 2
3 2
1 3
2 1
2 3
1 3
**/ 
