/**
프로그램명 : 17070.cpp
설명 : 파이프 옮기기 1 
작성일시 : 2022.02.27
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,cnt;
int arr[18][18];

void pipe(int x, int y, int k){
	if (x==n && y==n){
		cnt++;
		return;
	}
	
	if (k==0){
		if (y==n) return;
		if (arr[x][y+1]==10) pipe(x,y+1,0);
		if (arr[x+1][y]==10 && arr[x+1][y+1]==10 && arr[x][y+1]==10) pipe(x+1,y+1,1);
	}
	
	else if (k==1){
		if (arr[x][y+1]==10) pipe(x,y+1,0);
		if (arr[x+1][y]==10) pipe(x+1,y,2);
		if (arr[x+1][y]==10 && arr[x+1][y+1]==10 && arr[x][y+1]==10) pipe(x+1,y+1,1);
	}
	
	else if (k==2){
		if (x==n) return;
		if (arr[x+1][y]==10) pipe(x+1,y,2);
		if (arr[x+1][y]==10 && arr[x+1][y+1]==10 && arr[x][y+1]==10) pipe(x+1,y+1,1);
	}
	
	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) {
			cin>>arr[i][j];
			arr[i][j]+=10;
		}
	pipe(1,2,0);
	cout<<cnt;
}

/**
실행 결과
6
0 0 0 0 0 0
0 1 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
-----
13
**/  
