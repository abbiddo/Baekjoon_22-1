/**
프로그램명 : 1260.cpp
설명 : DFS BFS
작성일시 : 2022.02.17
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int n;
int visit[1001];
int map[1001][1001];

void DFS(int v){
	visit[v]=1;
	cout<<v<<" ";
	for (int i=1;i<=n;i++)
		if (visit[i]==0 && map[v][i]==1) DFS(i);
}

void BFS(int v){
	queue<int> q;
	q.push(v);
	visit[v]=0;
	while(!q.empty()){
		v=q.front();
		cout<<v<<" ";
		q.pop();
		for (int i=1;i<=n;i++)
			if (visit[i]==1 && map[v][i]==1){
				q.push(i);
				visit[i]=0;
			}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,v,a,b;
	cin>>n>>m>>v;
	
	for (int i=0;i<m;i++){
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	
	DFS(v);
	cout<<"\n";
	BFS(v);
}

/**
실행 결과
4 5 1
1 2
1 3
1 4
2 4
3 4
-----
1 2 4 3
1 2 3 4
**/  
