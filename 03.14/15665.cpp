/**
프로그램명 : 15665.cpp
설명 : N과 M 11
작성일시 : 2022.03.14
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,m;
int arr[8];
int v[10001];

void dfs(int num, int cnt){
	if (cnt==m){
		for (int i=0;i<m;i++) cout<<arr[i]<<" ";
		cout<<"\n";
		return;
	}
	for (int i=0;i<=10000;i++){
		if (v[i]==1){
			arr[cnt]=i;
			dfs(i, cnt+1);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a;
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a;
		v[a]=1;
	}
	dfs(1,0);
}

/**
실행 결과 
4 2
9 7 9 1
-----
1 1
1 7
1 9
7 1
7 7
7 9
9 1
9 7
9 9
**/ 
