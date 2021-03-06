/**
프로그램명 : 15654.cpp
설명 : N과 M 5
작성일시 : 2022.03.09
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,m;
int arr[8];
int v[10001];

int cmp(int a, int cnt){
	for (int i=0;i<cnt;i++)
		if (a==arr[i]) return 0;
	return 1;
}

void dfs(int cnt){
	if (cnt==m){
		for (int i=0;i<m;i++) cout<<arr[i]<<" ";
		cout<<"\n";
		return;
	}
	for (int i=1;i<=10000;i++){
		if (v[i]==1 && cmp(i,cnt)){
			arr[cnt]=i;
			dfs(cnt+1);
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
	dfs(0);
}

/**
실행 결과 
4 4
1231 1232 1233 1234
-----
1231 1232 1233 1234
1231 1232 1234 1233
1231 1233 1232 1234
1231 1233 1234 1232
1231 1234 1232 1233
1231 1234 1233 1232
1232 1231 1233 1234
1232 1231 1234 1233
1232 1233 1231 1234
1232 1233 1234 1231
1232 1234 1231 1233
1232 1234 1233 1231
1233 1231 1232 1234
1233 1231 1234 1232
1233 1232 1231 1234
1233 1232 1234 1231
1233 1234 1231 1232
1233 1234 1232 1231
1234 1231 1232 1233
1234 1231 1233 1232
1234 1232 1231 1233
1234 1232 1233 1231
1234 1233 1231 1232
1234 1233 1232 1231
**/ 
