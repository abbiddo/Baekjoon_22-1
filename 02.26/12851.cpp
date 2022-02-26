/**
프로그램명 : 12851.cpp
설명 : 숨바꼭질 2 
작성일시 : 2022.02.26
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;

int x,y,mi=100001,cnt; 
int vs[100001];

void bfs(){
	queue<pair<int,int>> q;
	q.push({x,0});
	while(!q.empty()){
		int v=q.front().first;
		int n=q.front().second;
		q.pop();
		vs[v]=1;
		
		if (cnt && v==y && mi==n) cnt++;
		if (!cnt && v==y){
			mi=n;
			cnt++;
		}
		if (mi<n) return;
		
		if (v*2<=100000 && !vs[v*2]) q.push({v*2,n+1});
		if (v+1<=100000 && !vs[v+1]) q.push({v+1,n+1});
		if (v-1>=0 && !vs[v-1]) q.push({v-1,n+1});
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>x>>y;
	bfs();
	cout<<mi<<"\n"<<cnt;
}

/**
실행 결과
5 17
-----
4
2
**/  
