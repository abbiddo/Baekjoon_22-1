/**
프로그램명 : 1569.c
설명 : 정사각형(변)으로 점 가리기 
작성일시 : 2022.01.25
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,i,minx=1000,maxx=-1000,miny=1000,maxy=-1000;
	int c1=0,c2=0,c3=0,c4=0;
	int a[50],b[50];
	scanf("%d",&n); 
	
	for (i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if (a[i]>maxx) maxx=a[i];
		if (a[i]<minx) minx=a[i];
		if (b[i]>maxy) maxy=b[i];
		if (b[i]<miny) miny=b[i];
		
	}
	
	for (i=0;i<n;i++){		
		// 네 변 어디에도 닿지 않는 점일 때 
		if ((a[i]!=maxx && a[i]!=minx)&&(b[i]!=maxy && b[i]!=miny)){		
			printf("-1");
			return 0;
		}
		
		// 꼭짓점이 아닌 변에 있는 점 개수
		if ((a[i]<maxx && a[i]>minx) && b[i]==maxy) c1=1;
		if ((a[i]<maxx && a[i]>minx) && b[i]==miny) c2=1;
		if ((b[i]<maxy && b[i]>miny) && a[i]==maxx) c3=1;
		if ((b[i]<maxy && b[i]>miny) && a[i]==minx) c4=1;
	}
	
	// 네 변이 모두 막혀있으나 가로 세로 길이가 다를 때 (정사각형 아닐 때) 
	if ((c1+c2+c3+c4==4) && (maxx-minx)!=(maxy-miny)) printf("-1");
	
	// 네 변 중 하나라도 뚫려 있어 길이 변화가 가능하다면 큰 쪽으로 정사각형을 만듦 
	else{
		if (maxx-minx>maxy-miny) printf("%d",maxx-minx);
		else printf("%d",maxy-miny);
	}
}

/**
실행 결과
4          (입력) 
-10 0
0 -1
3 3
-1 4
-1         (출력) 
**/ 
