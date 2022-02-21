/**
프로그램명 : 7576.cpp
설명 : 토마토 
작성일시 : 2022.02.22
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[1000][1000];
int n,m,k,zcnt=0;

int change(int i, int j){
	if ((arr[i+1][j]==0 || arr[i+1][j]>arr[i][j]) && i<n-1) {
		if (arr[i+1][j]==0) zcnt--;
		arr[i+1][j]=arr[i][j]+1;
		change(i+1,j);
	}
	if ((arr[i-1][j]==0 || arr[i-1][j]>arr[i][j]) && i>0) {
		if (arr[i-1][j]==0) zcnt--;
		arr[i-1][j]=arr[i][j]+1;
		change(i-1,j);
	}
	if ((arr[i][j+1]==0 || arr[i][j+1]>arr[i][j]) && j<m-1) {
		if (arr[i][j+1]==0) zcnt--;
		arr[i][j+1]=arr[i][j]+1;
		change(i,j+1);
	}
	if ((arr[i][j-1]==0 || arr[i][j-1]>arr[i][j]) && j>0) {
		if (arr[i][j-1]==0) zcnt--;
		arr[i][j-1]=arr[i][j]+1;
		change(i,j-1);
	}
	return 0;
}

int tomato(){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (arr[i][j]==1){
				change(i,j);
			}
		}
	}
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
		
	tomato();
	
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			if (k<arr[i][j]) k=arr[i][j];
	
	if (zcnt!=0) cout<<-1;
	else cout<<k-1;
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
