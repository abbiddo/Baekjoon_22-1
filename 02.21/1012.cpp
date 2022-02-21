/**
프로그램명 : 1012.cpp
설명 : 유기농 배추 
작성일시 : 2022.02.21
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[50][50];
int n,m,cnt=0;

int change(int i, int j){
	arr[i][j]=0;
	if (arr[i+1][j]==1 && i<n-1) change(i+1,j);
	if (arr[i-1][j]==1 && i>0) change(i-1,j);
	if (arr[i][j+1]==1 && j<m-1) change(i,j+1);
	if (arr[i][j-1]==1 && j>0) change(i,j-1);
	return 0;
}

int wlfjddl(){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (arr[i][j]==1){
				cnt++;
				change(i,j);
			}
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,k,a,b;
	cin>>N;
	for (int i=0;i<N;i++){
		cin>>n>>m>>k;
		for (int j=0;j<k;j++){
			cin>>a>>b;
			arr[a][b]=1;
		}
		cnt=0;
		wlfjddl();
		cout<<cnt<<'\n';
	}	
}

/**
실행 결과 
2
10 8 17
0 0
1 0
1 1
4 2
4 3
4 5
2 4
3 4
7 4
8 4
9 4
7 5
8 5
9 5
7 6
8 6
9 6
10 10 1
5 5
-----
5
1

**/  
