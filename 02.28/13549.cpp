/**
프로그램명 : 13549.cpp
설명 : 숨바꼭질 3 
작성일시 : 2022.02.28
작성자 : 정소영 
**/

#include <iostream>
#include <deque>
using namespace std;

int n,m;
int vs[100001];

void bfs(){
	deque<int> q;
	q.push_front(n);
	vs[n]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop_front();
		
		if (x==m) {cout<<vs[x]-1; return;}
		
		if (x*2<=100000 && vs[x*2]==0){
			vs[x*2]=vs[x];
			q.push_front(x*2);
		}
		if (x+1<=100000 && vs[x+1]==0){
			vs[x+1]=vs[x]+1;
			q.push_back(x+1);
		} 
		if (x-1>=0 && vs[x-1]==0){
			vs[x-1]=vs[x]+1;
			q.push_back(x-1);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	bfs();
}

/**
실행 결과
2 17
-----
2
**/  
