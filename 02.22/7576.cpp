/**
프로그램명 : 7576.cpp
설명 : 토마토 
작성일시 : 2022.02.22
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[1000][1000];
int n,m,k=1,day=0,zcnt=0;

int change(int i, int j){
	if (arr[i+1][j]==0 && i<n-1) {
		arr[i+1][j]=k+1;
		zcnt--;
	}
	if (arr[i-1][j]==0 && i>0) {
		arr[i-1][j]=k+1;
		zcnt--;
	}
	if (arr[i][j+1]==0 && j<m-1) {
		arr[i][j+1]=k+1;
		zcnt--;
	}
	if (arr[i][j-1]==0 && j>0) {
		arr[i][j-1]=k+1;
		zcnt--;
	}
	return 0;
}

int tomato(){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (arr[i][j]==k){
				change(i,j);
			}
		}
	}
	day++;
	k++;
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>m>>n;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++) {
			cin>>arr[i][j];
			if (arr[i][j]==0) zcnt++;
		}
		
	for (int i=0;i<n*m/3*2;i++)	{
		if (zcnt==0){
			cout<<day;
			return 0;
		}
		tomato();
	}
	cout<<-1;
}

/**
실행 결과 
6 4
1 -1 0 0 0 0
0 -1 0 0 0 0
0 0 0 0 -1 0
0 0 0 0 -1 1
-----
6
**/  
