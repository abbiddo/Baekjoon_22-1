/**
프로그램명 : 15652.cpp
설명 : N과 M 4 
작성일시 : 2022.03.09
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,m;
int arr[9];

void dfs(int num, int cnt){
	if (cnt==m){
		for (int i=0;i<m;i++) cout<<arr[i]<<" ";
		cout<<"\n";
		return;
	}
	for (int i=num;i<=n;i++){
		arr[cnt]=i;
		dfs(i,cnt+1);
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
1 1
1 2
1 3
1 4
2 2
2 3
2 4
3 3
3 4
4 4
**/ 
