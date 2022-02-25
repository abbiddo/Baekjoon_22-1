/**
프로그램명 : 16928.cpp
설명 : 뱀과 사다리 게임 
작성일시 : 2022.02.25
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;

int n,m,x,y; 
int board[101],d[101];
void BFS(){
	d[1]=0;
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for (int i=1;i<7;i++){
			int y=x+i;
			if (y>100) continue;
			y=board[y];
			if (d[y]==-1){
				d[y]=d[x]+1;
				q.push(y);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for (int i=1;i<101;i++)	{
		d[i]=-1;
		board[i]=i;
	}
	
	cin>>n>>m;
	for (int i=0;i<n+m;i++){
		cin>>x>>y;
		board[x]=y;
	}
	
	BFS();
	cout<<d[100];
}

/**
실행 결과
3 7
32 62
42 68
12 98
95 13
97 25
93 37
79 27
75 19
49 47
67 17
-----
3
**/  
