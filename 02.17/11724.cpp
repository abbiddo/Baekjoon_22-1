/**
프로그램명 : 11724.cpp
설명 : 연결 요소의 개수 
작성일시 : 2022.02.17
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int n,cnt=0;
int visit[1001];
int map[1001][1001];

void BFS(int v){
	cnt++; 
	queue<int> q;
	q.push(v);
	visit[v]=1;
	while(!q.empty()){
		v=q.front();
		q.pop();
		for (int i=1;i<=n;i++)
			if (visit[i]==0 && map[v][i]==1){
				q.push(i);
				visit[i]=1;
			}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,a,b;
	cin>>n>>m;
	
	for (int i=0;i<m;i++){
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	
	for (int i=1;i<=n;i++){
		if (visit[i]==0) BFS(i);
	}
	cout<<cnt;
}

/**
실행 결과
6 5
1 2
2 5
5 1
3 4
4 6
-----
2
**/  
