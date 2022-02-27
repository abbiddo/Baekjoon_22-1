/**
프로그램명 : 15650.cpp
설명 : N과 M 2 
작성일시 : 2022.02.26
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,m;
int arr[9];
int vs[9];

void dfs(int num, int cnt){
	if (cnt==m){
		for (int i=0;i<m;i++) cout<<arr[i]<<" ";
		cout<<"\n";
		return;
	}
	for (int i=num;i<=n;i++){
		if (!vs[i]){
			vs[i]=1;
			arr[cnt]=i;
			dfs(i+1,cnt+1);
			vs[i]=0;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	dfs(1,0);
}

/**
실행 결과
4 2
-----
1 2
1 3
1 4
2 3
2 4
3 4
**/  
