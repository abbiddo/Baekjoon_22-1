/**
프로그램명 : 7562.cpp
설명 : 나이트의 이동 
작성일시 : 2022.03.01
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;

int n,h,x,y,rx,ry;
int arr[301][301];

int bfs(){
	int vs[301][301]={0};
	queue<pair<int, int>> q;
	q.push({x,y});
	vs[x][y]=1;
	while(!q.empty()){
		int a=q.front().first;
		int b=q.front().second;
		q.pop();
		
		if (a==rx && b==ry) return vs[a][b]-1;
		
		if (vs[a+2][b+1]==0)
			if (a+2<h && b+1<h){
				q.push({a+2,b+1});
				vs[a+2][b+1]=vs[a][b]+1;
			}
		if (vs[a+2][b-1]==0)
			if (a+2<h && b-1>=0){
				q.push({a+2,b-1});
				vs[a+2][b-1]=vs[a][b]+1;
			}
		if (vs[a-2][b+1]==0)
			if (a-2>=0 && b+1<h){
				q.push({a-2,b+1});
				vs[a-2][b+1]=vs[a][b]+1;
			}
		if (vs[a-2][b-1]==0)
			if (a-2>=0 && b-1>=0){
				q.push({a-2,b-1});
				vs[a-2][b-1]=vs[a][b]+1;
			}
		if (vs[a+1][b+2]==0)
			if (a+1<h && b+2<h){
				q.push({a+1,b+2});
				vs[a+1][b+2]=vs[a][b]+1;
			}
		if (vs[a+1][b-2]==0)
			if (a+1<h && b-2>=0){
				q.push({a+1,b-2});
				vs[a+1][b-2]=vs[a][b]+1;
			}
		if (vs[a-1][b+2]==0)
			if (a-1>=0 && b+2<h){
				q.push({a-1,b+2});
				vs[a-1][b+2]=vs[a][b]+1;
			}
		if (vs[a-1][b-2]==0)
			if (a-1>=0 && b-2>=0){
				q.push({a-1,b-2});
				vs[a-1][b-2]=vs[a][b]+1;
			}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>h;
		cin>>x>>y;
		cin>>rx>>ry;
		cout<<bfs()<<"\n";
	}
}

/**
실행 결과
3
8
0 0
7 0
100
0 0
30 50
10
1 1
1 1
-----
5
28
0
**/  
