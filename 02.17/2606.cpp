/**
프로그램명 : 2606.cpp
설명 : 바이러스 
작성일시 : 2022.02.17
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int n,cnt=0;
int visit[101];
int map[101][101];

void BFS(int v){
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
				cnt++;
			}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,v,a,b;
	cin>>n>>m;
	
	for (int i=0;i<m;i++){
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	
	BFS(1);
	cout<<cnt;
}

/**
실행 결과
7
6
1 2
2 3
1 5
5 2
5 6
4 7
-----
4
**/  
