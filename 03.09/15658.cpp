/**
프로그램명 : 15657.cpp
설명 : N과 M 8
작성일시 : 2022.03.09
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
	for (int i=num;i<=10000;i++){
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
9 8 7 1
-----
1 1
1 7
1 8
1 9
7 7
7 8
7 9
8 8
8 9
9 9
**/ 
